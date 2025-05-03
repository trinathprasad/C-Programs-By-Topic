#include <stdio.h>
int main() {
    int x = 5;
    if (x-- > 5)
        printf("A");
    if (++x == 5)
        printf("B");
    if (x-- && 0)
        printf("C");
    if (x)
        printf("D");
    return 0;
} /*BD*/