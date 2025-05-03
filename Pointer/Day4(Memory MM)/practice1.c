#include<stdio.h>
#include <stdlib.h>
int main()
{
 int *p, *q;
 p=(int*)malloc(10);
 printf("p=%u\n",p);
 free(p);  /*Here the address value is same  beacuse after the p is freed the q is aquire the adddress of p*/
 q=(int*)malloc(10);
 printf("q=%u",q);

 return 0;
}

// p=9383848
// q=9383848