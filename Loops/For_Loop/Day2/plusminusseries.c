#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      printf("%d+",i);
      sum=sum-i;
      
    }else{
      printf("%d-",i);
      sum=sum+i;
    }
  }
  printf("\b=%d",sum);
  return 0;
}

/*1-2+3-4+5=3*/



