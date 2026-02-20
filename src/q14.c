// Create an expression that swaps the values of two variables x and y without using a temporary variable.

#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    x = x + y; // x becomes 15
    y = x - y; // y becomes 5
    x = x - y; // x becomes 10

    printf("x = %d, y = %d\n", x, y);
    return 0;
}