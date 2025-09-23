#include <stdio.h>
#include "../include/mystrfunctions.h"
#include "../include/myfilefunctions.h"

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";

    printf("Initial str1: %s\n", str1);
    printf("Initial str2: %s\n", str2);

    mystrcpy(str1, "Hi");
    printf("After mystrcpy, str1: %s\n", str1);

    mystrncpy(str2, "Everyone", 4);
    str2[4] = '\0';   // ensure null termination
    printf("After mystrncpy, str2: %s\n", str2);

    mystrcat(str1, str2);
    printf("After mystrcat, str1: %s\n", str1);

    printf("mystrlen(str1): %d\n", mystrlen(str1));

    FILE* file = fopen("test.txt", "r");
    if (!file) {
        printf("Could not open test.txt\n");
        return 1;
    }
    int lines, words, chars;
    wordCount(file, &lines, &words, &chars);
    fclose(file);

    printf("File stats -> Lines: %d, Words: %d, Chars: %d\n", lines, words, chars);

    return 0;
}

