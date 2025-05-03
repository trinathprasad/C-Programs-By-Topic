#include<stdio.h>
int main()
{
  int n,m,s=0,r,f;
  printf("Enter a number:");
  scanf("%d",&n);
  for(m=n;m!=0;m=m/10)
  {
    for(f=1,r=m%10;r>1;r--)
    {
      f=f*r;
    }
    s=s+f;
  }
  if(n==s)
  {
    printf("It is a strong number");
  }else{
    printf("It is not a strong number");
  }
  return 0;
}