#include <stdio.h>
int main() {
    int x = 5;

    label:
    printf("%d ", x);
    x--;

    if (x > 0)
        goto label;

    return 0;
}/*54321*/