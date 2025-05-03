#include<stdio.h>
int main()
{
  char s[100], *p=&s[0];
  printf("Enter a string:");
  gets(s);
  for( ;*p;p++);
  printf("length=%d",p-s);
return 0;
}