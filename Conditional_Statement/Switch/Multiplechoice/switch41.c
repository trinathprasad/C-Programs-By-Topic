#include<stdio.h>
int main()
{
  int a=0;
  switch(a=*("I Love""abcd"+7))
  {
    case 97: printf("Jhanvi kapoor");
    break;
    case 98: printf("Rashmika mandana");
    break;
    case 99: printf("Alia bhatt");
    break;
    default: printf("shradda kapoor");

    }
    printf("a=%d",a);
    return 0;
  }/*Rashmika mandana a=98*/