// Write an expression that checks if a number is both positive and even.

#include <stdio.h>

int main() {
    int number = 8;  

    int isPositiveAndEven = (number > 0) && (number % 2 == 0);

    printf("%d\n", isPositiveAndEven);  

    return 0;
}