//  #include<stdio.h>
//  int main()
//  {
//   int n,f=1;
//   printf("Enter a number:");
//   scanf("%d",&n);
//   while(n>1)
//   {
//     f=f*n;
//     n--;
//   }
//   printf("Factorial=%d",f);
//   return 0;
//  }

#include<stdio.h>
int main()
{
  int n,f=1, *p=&n;
  printf("Enter a number:");
  scanf("%d",&n);

  while(*p>1)
  {
    f=f* *p;
    --*p;

  }
printf("Factorial = %d",f);
return 0;
}