#include<stdio.h>
int main()
{
  long int a,n,m,s=0,f,r,c=0;
  printf("Enter a number:");
  scanf("%ld",&n);
  for(a=1;a<=n;a++)
  {
    for(s=0,m=a;m!=0;m=m/10)
    {
      f=1;
      for(r=m%10;r>1;r--)
      {
        f=f*r;
      }
      s=s+f;
    }
    if(a==s)
    {
      printf("%ld ",a);
      c++;
    }
  }
  printf("\n%ld strong numbers.",c);
  return 0;
}