#include <stdio.h>
#include "tokenizer.h"
#include <string.h>
#include <stdlib.h>

void main()
{
    printf("Test start.\n");

    char* s = "Apple Cranbery  Orange"; 
    char* str = (char*) malloc (strlen(s) + 1);
    char* release = str;
    strcpy(str, s);

    char* t = str_tok(&str, ' ');

    int counter = 0;

    while(NULL != t)
    {
	    printf("Token %d: %s\n", counter, t);
        t = str_tok(&str, ' ');
    	counter++;
    }

    free(release);
    printf("Test end.\n"); 
}
