#include<stdio.h>
int main()
{
  int a=0;
  switch(++a)  
  {
    case 0 : printf("Hi");
    break;
    case 1 : printf("Hello");
    break;
    
    default: printf("Bye");  
  }
  printf("a=%d",a);
  return 0;
}/*Hello a=1*/