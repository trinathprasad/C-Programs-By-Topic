#include<stdio.h>
int main()
{
  float a=1.0;
  if(sizeof(50000)==sizeof(1.2)) printf("Hi"); else printf("Bye");
  if(sizeof(a)==sizeof(1.0)) printf("Hi"); else printf("Bye");
  if(sizeof(a)==sizeof(50000)) printf("Hi"); else printf("Bye");
  if(sizeof("abc")==sizeof("ab"+1)) printf("Hi"); else printf("Bye");
  if(sizeof("abc")==sizeof("ab")+1) printf("Hi"); else printf("Bye");
  
return 0;
}