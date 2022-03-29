#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"


int main(int argc, char ** argv) {

    char * str;
    str = malloc(sizeof(char)*100);
    strcpy(str,"hello");
    printf("%lu", strlen(str));
    free(str);
    return 0;
}