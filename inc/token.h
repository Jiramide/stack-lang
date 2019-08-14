#pragma once

enum token_type
{

}

typedef struct
{
  enum token_type type;
  char *lexeme;
} token_t;

token_t *token_new(enum token_type type, char *lexeme);
void token_free(token_t *token);
