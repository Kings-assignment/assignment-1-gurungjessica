// Given a variable num, write an expression that checks if it is a power of 2.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int isPowerOf2 = (num > 0) && (floor(log2(num)) == ceil(log2(num)));
    
    printf("%d\n", isPowerOf2); 
    
    return 0;
}