#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cstring>
#include <cassert>
#include <iostream>
#include <stdio.h>
namespace {

    using std::vector;
    using std::iswspace;
    using std::memcpy;

    enum TokenType {
	INDENT,
	INDENT_INCR,
	INDENT_DECR,
    };

    struct Delimiter {
	enum {
	    SingleQuote = 1 << 0,
	    DoubleQuote = 1 << 1,
	    BackQuote = 1 << 2,
	    Raw = 1 << 3,
	    Format = 1 << 4,
	    Triple = 1 << 5,
	    Bytes = 1 << 6,
	};

	Delimiter() : flags(0) {}

	bool is_format() const {
	    return flags & Format;
	}

	bool is_raw() const {
	    return flags & Raw;
	}

	bool is_triple() const {
	    return flags & Triple;
	}

	bool is_bytes() const {
	    return flags & Bytes;
	}

	int32_t end_character() const {
	    if (flags & SingleQuote) return '\'';
	    if (flags & DoubleQuote) return '"';
	    if (flags & BackQuote) return '`';
	    return 0;
	}

	void set_format() {
	    flags |= Format;
	}

	void set_raw() {
	    flags |= Raw;
	}

	void set_triple() {
	    flags |= Triple;
	}

	void set_bytes() {
	    flags |= Bytes;
	}

	void set_end_character(int32_t character) {
	    switch (character) {
		case '\'':
		    flags |= SingleQuote;
		    break;
		case '"':
		    flags |= DoubleQuote;
		    break;
		case '`':
		    flags |= BackQuote;
		    break;
		default:
		    assert(false);
	    }
	}

	char flags;
    };

    struct Scanner {
	vector<uint16_t> indent_length_stack;
	vector<Delimiter> delimiter_stack;

	Scanner() {
	    assert(sizeof(Delimiter) == sizeof(char));
	    deserialize(NULL, 0);
	}

	unsigned serialize(char *buffer) {
	    size_t i = 0;

	    size_t delimiter_count = delimiter_stack.size();

	    if (delimiter_count > UINT8_MAX) delimiter_count = UINT8_MAX;

	    buffer[i++] = delimiter_count;

	    if (delimiter_count > 0) {
		memcpy(&buffer[i], delimiter_stack.data(), delimiter_count);
	    }

	    i += delimiter_count;

	    vector<uint16_t>::iterator
		iter = indent_length_stack.begin() + 1,
		     end = indent_length_stack.end();

	    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
		buffer[i++] = *iter;
	    }

	    return i;
	}

	void deserialize(const char *buffer, unsigned length) {
	    delimiter_stack.clear();
	    indent_length_stack.clear();
	    indent_length_stack.push_back(0);

	    if (length > 0) {
		size_t i = 0;

		size_t delimiter_count = (uint8_t)buffer[i++];

		delimiter_stack.resize(delimiter_count);

		if (delimiter_count > 0) {
		    memcpy(delimiter_stack.data(), &buffer[i], delimiter_count);
		}

		i += delimiter_count;

		for (; i < length; i++) {
		    indent_length_stack.push_back(buffer[i]);
		}
	    }
	}

	void advance(TSLexer *lexer) {
	    lexer->advance(lexer, false);
	}

	void skip(TSLexer *lexer) {
	    lexer->advance(lexer, true);
	}

	bool scan(TSLexer *lexer, const bool *valid_symbols) {
	    bool found_end_of_line = false;
	    uint32_t indent_length = 0;
	    uint16_t current_indent_length;

	    if (!(valid_symbols[INDENT] || valid_symbols[INDENT_INCR] || valid_symbols[INDENT_DECR] )) {
		return false;
	    }


	    if (!indent_length_stack.empty()) {
		current_indent_length = indent_length_stack.back();
	    } else {
		current_indent_length = 0;
	    }

	    if (valid_symbols[INDENT_INCR]) {
		indent_length_stack.push_back(current_indent_length + 2);

		lexer->result_symbol = INDENT_INCR;

		return true;
	    }

	    for (;;) {
		if (lexer->lookahead == ' ') {
		    indent_length++;

		    skip(lexer);
		}else {
		    break;
		}
	    }

	    if (indent_length > 1) {
		if ( valid_symbols[INDENT] && indent_length == current_indent_length) {

		    lexer->result_symbol = INDENT;

		    return true;
		}
	    } else if (valid_symbols[INDENT_DECR] && indent_length < current_indent_length) {
		indent_length_stack.pop_back();

		lexer->result_symbol = INDENT_DECR;

		return true;
	    }

	    return false;

	}

    };
}

extern "C" {

    void *tree_sitter_rock_external_scanner_create() {
	return new Scanner();
    }

    bool tree_sitter_rock_external_scanner_scan(void *payload, TSLexer *lexer,
	    const bool *valid_symbols) {
	Scanner *scanner = static_cast<Scanner *>(payload);
	return scanner->scan(lexer, valid_symbols);
    }

    unsigned tree_sitter_rock_external_scanner_serialize(void *payload, char *buffer) {
	Scanner *scanner = static_cast<Scanner *>(payload);
	return scanner->serialize(buffer);
    }

    void tree_sitter_rock_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
	Scanner *scanner = static_cast<Scanner *>(payload);
	scanner->deserialize(buffer, length);
    }

    void tree_sitter_rock_external_scanner_destroy(void *payload) {
	Scanner *scanner = static_cast<Scanner *>(payload);
	delete scanner;
    }

}

