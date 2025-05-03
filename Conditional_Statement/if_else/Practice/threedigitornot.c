#include<stdio.h>
int main()
{
  int n;
  printf("Enter a character ");
  scanf("%d", &n);

  if(n>=100 && n<=900 || n<= -100 && n>=-999)
  {
    printf("%d is a 3 digit number",n);
  }
  else {
  printf("%d is not a 3 digit number",n );
  }

  return 0;
}