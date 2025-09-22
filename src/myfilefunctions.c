#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../include/myfilefunctions.h"

//wordzz count
int wordCount(FILE* file, int* lines, int* words, int* chars) {
    int c;
    *lines = *words = *chars = 0;

    while ((c = fgetc(file)) != EOF) {
        (*chars)++;

        if (c == '\n') {
            (*lines)++;
            (*words)++;  
        }
        else if (c == ' ') {
            (*words)++;  
        }
    }

    
    if (*chars > 0) {
        (*words)++;
    }

    return 0;
}

