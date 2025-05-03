#include<stdio.h>
int main()
{
  switch(10 || 20)  
  {
    case 10 : printf("Hi");
    case 20 : printf("Hello");
    
    default: printf("Bye");  
  }
  return 0;
} /*Bye*/
