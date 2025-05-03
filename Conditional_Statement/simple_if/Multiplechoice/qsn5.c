#include <stdio.h>
int main() {
    int x = 5;

    if (x > 0)
        goto label;
    
    printf("Hello");

    label:
    printf("World");

    return 0;
}/*World*/