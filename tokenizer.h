#ifndef HEADER_FILE
#define HEADER_FILE

// ppline - a pointer to a pointer to the string to be parsed.
// delim - the character the parser will stop at the spit the first section of
//         the string out.
// str_tok will change the place *ppline is pointing at i.e. increase the
// string to point to the start of the next token or null.
char* str_tok(char** ppline, char delim);

#endif
