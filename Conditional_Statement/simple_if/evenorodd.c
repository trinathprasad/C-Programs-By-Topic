#include<stdio.h>
int main()
{
  int n;
  printf("Enter the no:");
  scanf("%d", &n);

  if((n&1)==0)
  {
    printf("Even");
  }
  if((n&1)!=0)
  {
    printf("Odd");
  }
return 0;
}