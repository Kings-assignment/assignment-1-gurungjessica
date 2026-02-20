// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>

int main() {
    double a = 10.5, b = 5.2;
    int result = (int)round(sqrt(a + b));
    printf("Result: %d\n", result); 
    return 0;
}