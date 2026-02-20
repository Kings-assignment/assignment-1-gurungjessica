// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).

#include <stdio.h>

int main()
 {
    int n = 12;
    int divisible_by_2_and_3 = ((n / 2) * 2 == n) && ((n / 3) * 3 == n);
    printf("%d\n", divisible_by_2_and_3); 
    return 0;
}