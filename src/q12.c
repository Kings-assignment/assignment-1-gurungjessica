// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.

#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 3;

    int result = (a > b) && (c != 0);

    printf("Result: %d\n", result);

    return 0;
}
