#include<stdio.h>
int main()
{
  char s[100];
  int i,j;
  puts("Enter the string:");
  gets(s);
  for(i=0;s[i]!=0;i++)
  {
    for(j=i;s[j]!=0;j++)
    {
      printf("%c",s[j]);
    }
    printf("\n");
  }
  return 0;
}

// Enter the string
// Alia
// Alia
// lia
// ia
// a