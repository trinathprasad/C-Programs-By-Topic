#include<stdio.h>
int main()
{
  int n,s;
  printf("Enter a number");
  scanf("%d",&n);
  while(n>9)
  {
    for(s=0;n!=0;n=n/10)
    {
      s=s+n%10;
    }
    n=s;
  }
  if(n==1)
  {
    printf("Magic no");
  }else{
    printf("Not a magic no");
  }
  return 0;
}