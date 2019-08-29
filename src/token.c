#include <stdlib.h>

#include "token.h"

token_t *token_new(enum token_type type, char *lexeme)
{
  token_t *new_token = malloc(sizeof(token_t));

  new_token->type = type;
  new_token->lexeme = lexeme;

  return new_token;
}

void token_free(token_t *token)
{
  free(token->lexeme);
  free(token);
}
