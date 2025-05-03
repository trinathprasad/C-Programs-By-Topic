#include<stdio.h>
int main()
{
  char s[100];
  int i,j;
  printf("Enter the string");
  gets(s);
  for(i=0;s[i];i++);  /*Length*/
  for( ;i>0;i--,s[i]='\0')
  {
    puts(s);
  }
  return 0;
}