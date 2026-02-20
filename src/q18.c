// Write a C expression that calculates the sum of the squares of three different numbers.

#include <stdio.h>

int main() {
    int a = 2, b = 3, c = 4;  
    int sum_of_squares = a * a + b * b + c * c;

    printf("Sum of squares: %d\n", sum_of_squares);
    
    return 0;
}