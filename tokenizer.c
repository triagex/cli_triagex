#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

char* str_tok(char** ppline, char delim)
{
    printf("str_tok function start.\n");

    if('\0' == **ppline) return NULL;

	char* token = *ppline;

	while('\0' != **ppline && delim != **ppline) (*ppline)++;

    // End of the string.
    if('\0' == **ppline) return token;

 	**ppline = '\0'; // Turning the first token to a string
    (*ppline)++;

	// Allow to handle multiple delimiters signs in a row.
	while(delim == **ppline) (*ppline)++;

	return token;
}
