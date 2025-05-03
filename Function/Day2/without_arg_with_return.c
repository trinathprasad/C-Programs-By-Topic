//Function without arguments , with return value.
#include<stdio.h>
int evenodd();
int evenodd()
{
  int n;
  printf("Enter a no");
  scanf("%d",&n);
  return n%2;
}
int main()
{
  if(evenodd())
  {
    printf("odd");
  }else{
    printf("Even");
  }
  return 0;
}