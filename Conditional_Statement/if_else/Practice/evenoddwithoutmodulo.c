#include<stdio.h>
int main()
{
  int n;
  printf("Enter the no:");
  scanf("%d", &n);

  if(n/2*2==n)
  {
    printf("Even");
  }
  else{
  printf("Odd");
}
return 0;
}
