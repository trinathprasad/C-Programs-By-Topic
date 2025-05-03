#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
  printf("Enter a string:");
  gets(s);
  printf("Length=%d\n",strlen(s));
  printf("reverse=%s\n",strrev(s));
  printf("Lower=%s\n",strlwr(s));
  printf("Upper=%s\n",strupr(s));

  return 0;
} 