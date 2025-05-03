#include<stdio.h>
int main()
{
  int n,i=1,es=0,os=0;
  printf("Enter a number");
  scanf("%d",&n);

  while(i<=n)
  {
    if(i%2==0)
    {
      es=es+i;
    }else{
      os=os+i;
    }
    i++;
  }
  printf("Sum of Even numbers= %d\n sum of odd numbers= %d\n",es,os);

  return 0;
}