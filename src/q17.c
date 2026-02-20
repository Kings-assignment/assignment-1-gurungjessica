// Create an expression that checks if a given character is an uppercase letter.

#include <stdio.h>

int main() {
    char ch = 'G';

    int is_uppercase = (ch >= 'A') && (ch <= 'Z');

    printf("%c is uppercase? %d\n", ch, is_uppercase); 

    return 0;
}