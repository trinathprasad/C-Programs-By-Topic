#include<stdio.h>
#include<ctype.h>
int main()
{
  char s[100];
  int i,j;
  puts("Enter a string:");
  gets(s);
  for(i=0;s[i];i++); /*length i=5*/

  for(j=0;j<i/2;j++)
  {
    if(tolower(s[j])!=tolower(s[i-j-1]))
    {
      puts("Not a palindrome");
      return 0;
    }
  }
  puts("palindrom");

  return 0;
}