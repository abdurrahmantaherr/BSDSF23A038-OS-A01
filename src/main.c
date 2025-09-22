#include <stdio.h>
#include "../include/mystrfunctions.h"
#include "../include/myfilefunctions.h"

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    mystrcpy(str1, "Hi");    
    
    mystrncpy(str2, "Everyone", 4);
    
    mystrcat(str1, str2);
    printf("Combined string: %s\n", str1);
    printf("Length: %d\n", mystrlen(str1));

    FILE* file = fopen("test.txt", "r");
    if (!file) {
    return 1;
    }
    int lines, words, chars;
    wordCount(file, &lines, &words, &chars);
    fclose(file);

    printf("Lines: %d, Words: %d, Chars: %d\n", lines, words, chars);

    return 0;
}

