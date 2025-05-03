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
  else{
  printf("Odd");
}
return 0;
}