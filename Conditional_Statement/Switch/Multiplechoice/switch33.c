#include<stdio.h>
int main()
{
  int a=0;
  switch(a++)
  {
    case 0: printf("Jhanvi kapoor");
    switch(a++)
    {
      case 2: printf("Rashmika mandana");
      break;
      default: printf("Pooja Hegde");

    }
    default: printf("shradda kapoor");
  }
  return 0;
}/*Jhanvi kapoor /Pooja Hegde /shradda kapoor*/