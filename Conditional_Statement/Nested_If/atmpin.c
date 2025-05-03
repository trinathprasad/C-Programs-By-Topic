#include<stdio.h>
  int main()
  {
    int pin, count=0;
    abc:
    printf("Enter your pin:");
    scanf("%4d",&pin);
    if(pin==1234)
    {
      printf("Welcome to HDFC ATM");
    }
    else
    {
      count ++;
      if(count==3)
      {
        printf("your card is blocked for 24 hours");
      }
      else{
        printf("Invalid pin");
        goto abc;
      }
    }
  
  return 0;
  }
