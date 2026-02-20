// Create an expression that checks if a given number is a perfect square.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isPerfectSquare = (sqrt(num) == floor(sqrt(num)));

    printf("%d\n", isPerfectSquare);

    return 0;
}