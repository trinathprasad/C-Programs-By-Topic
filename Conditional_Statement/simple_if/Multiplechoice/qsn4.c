#include <stdio.h>
int main() {
    int x = 2, y = 3;
    
    if (x > 1)
        goto step2;
    
    printf("A");
    
step2:
    if (y == 3) {
        printf("B");
        goto step3;
    }
    
    printf("C");

step3:
    printf("D");
    return 0;
}/*BD*/