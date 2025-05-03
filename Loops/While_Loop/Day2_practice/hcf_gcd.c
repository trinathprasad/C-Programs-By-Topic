#include<stdio.h>
int main(){
  int a,b,i=1,gcd=1;
  printf("Enter the value of a & b : ");
  scanf("%d%d",&a,&b);

  while(i<=a && i<=b)
  {
    if(a%i == 0 && b%i == 0)
    {
      gcd=i;
    }
    i++;
  }
  printf("The gcd of %d and %d is : %d ",a,b,gcd);
  return 0;
}