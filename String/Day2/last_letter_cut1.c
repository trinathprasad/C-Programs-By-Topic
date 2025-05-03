#include<stdio.h>
int main()
{
  char s[100];
  int i,j;
  puts("Enter a string:");
  gets(s);
  for(i=0;s[i];i++); /* Length=4*/
  for(i--;i>=0;i--)
  {
    for(j=0;j<=i;j++)
    {
      printf("%c",s[j]);
    }
    printf("\n");
  }

  return 0;
  
}

// Enter a string:
// ABCD
// ABCD
// ABC
// AB
// A

