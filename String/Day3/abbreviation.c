#include<stdio.h>
int main()
{
  char s[100]; int i;
  puts("Enter the string:");
  gets(s);
  if(s[0]!=' ')
  {
    printf("%c",s[0]);
  }
  for(i=0;s[i];i++)
  {
    if(s[i]==' ' && s[i+1]!=' ')
    {
      printf("%c",s[i+1]);
    }
  }
  return 0;

}