#include <stdio.h>
int a = 10;  // Global variable

void main() {
    int a = 20;  // Local variable (shadows the global variable)
    printf("%d\t", a);  // Prints 20

    {
        a = 30;  // Modifies the local `a`
        printf("%d\t", a);  // Prints 30
    }

    printf("%d", a);  // Still prints 30 (since `a` was modified inside the block)
}