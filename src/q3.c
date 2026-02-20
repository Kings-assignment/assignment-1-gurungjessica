// Write a C program to display a personalized greeting message. (Should contain 'hello' or 'welcome' in the message)

#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nHello %s! Welcome to the world of C programming.\n", name);
    return 0;
}