// Write an expression that checks if a number is a multiple of either 3 or 5.

#include <stdio.h>

int main() {
    int number = 15; 
    int isMultiple = (number % 3 == 0) || (number % 5 == 0);

    printf("%d is %sa multiple of 3 or 5.\n", number, isMultiple ? "" : "not ");

    return 0;
}