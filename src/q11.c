// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.

#include <stdio.h>

int main() {
    
    int x = 5;   
    
    x = (++x * 3) - 10;  
    
    printf("Final value of x: %d\n", x);
    
    return 0;
}