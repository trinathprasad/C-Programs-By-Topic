#include <stdio.h>
int a = 10;  
int main() {  
    printf("%d\t", a);  
    {
        int a = 30;  
        printf("%d\t", a); 
    }
    printf("%d", a);

    return 0;
  }