#include<stdio.h>
int main() {
    int i = 1, n;
    long int f = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {  /*while(n)*/
        f *= i;       /*f=f*n*/
        i++;          /*n--*/
    }

    printf("Factorial of %d is = %ld", n, f);
    return 0;
}
