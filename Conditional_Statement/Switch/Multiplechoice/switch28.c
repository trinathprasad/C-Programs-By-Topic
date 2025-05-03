#include<stdio.h>
int main()
{
  int a=0;
  switch(a++)
  {
    case 0: printf("Jhanvi kapoor");
    break;
    switch(++a)
    {
      case 2: printf("Rashmika mandana");
      break;
    }
    default: printf("shradda kapoor");
  }
  return 0;
}/*Jhanvi kapoor*/