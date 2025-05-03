#include <stdio.h>
int main() {
    int x = 2;
    if (x-- && printf("Hello"))
        printf(" World");
    return 0;
}