#include<stdio.h>
int main()
{
  int a=0;
  switch(a=0,1,2)
  {
    case 0: printf("Jhanvi kapoor");
    case 2: printf("Rashmika mandana");
    break;
    default: printf("shradda kapoor");

    }
    printf("a=%d",a);
    return 0;
  }/*Rashmika mandana a=0*/