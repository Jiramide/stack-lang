#include <stdlib.h>

#pragma once

typedef struct
{
  unsigned int line;
  unsigned int col;

  FILE src;

  token_t *curr;
} lexer_t;

lexer_t *open_file(const char *filepath);
token_t *consume(lexer_t lex);
token_t *expect(lexer_t lex);

void lexer_err(lexer_t lex, const char *err);
