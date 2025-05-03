#include<stdio.h>
int main()
{
  int a=0;
  xyz:
  switch(a++)  
  {
    case 1: printf("Hi");
    break;
    case 2 : printf("Hello");
    break;
    
    default: printf("Bye");  
  }
  if(a<=2) goto xyz;
  printf("a=%d",a);
  return 0;
}/*ByeHiHelloa=3*/