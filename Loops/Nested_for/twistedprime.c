#include<stdio.h>
int main()
{
  int n,i,rev=0,c=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      c++;
    }
  }
    if(c==2)
    {
      while(n)
      {
        rev=rev*10+(n%10);
        n=n/10;
      }
      for(c=0,i=1;i<=rev;i++)
      {
        if(rev%i==0)
        {
          c++;
        }
      }
        if(c==2)
        {
          printf("This is a twisted prime.");
        }else{
          printf("This is not a twisted prime.");
        }
      }
      else{
        printf("This is not a prime no.");
    }
    
      return 0;

    }
    
  
  