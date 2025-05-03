#include<stdio.h>
int main()
{
  int a=0;
  switch(++a)  
  {
    case 0 : printf("Hi");
    break;
    case1 : printf("Hello");
    break;
    
    default: printf("Bye");  
  }
  printf("a=%d",a);
  return 0;
}/*Bye a=1*/