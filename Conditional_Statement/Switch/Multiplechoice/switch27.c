#include<stdio.h>
int main()
{
  int a=0;
  switch(a=a++,a++,a++)  
  {
    case 1: printf("Hi");
    break;
    case 2 : printf("Hello");
    break;
    
    default: printf("Bye");  
  }
  printf("a=%d",a);
  return 0;
}/*Hi  a=2*/