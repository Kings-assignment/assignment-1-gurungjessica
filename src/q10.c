// Write a C program to swap the values of two variables using a temporary variable.

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}