#include<stdio.h>
int main()
{
  int n;
  printf("Enter the no:");
  scanf("%d", &n);

  if(n%2)
  {
    printf("Odd");
  }
  else{
  printf("Even");
}
return 0;
}