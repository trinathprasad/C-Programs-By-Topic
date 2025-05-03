#include<stdio.h>
int main()
{
  char s[100];
  int i;
  printf("Enter a string:");
  gets(s);
  for(i=0;s[i];i++)
  {
    puts(s+i);
  }
  return 0;
}

// Enter the string
// Alia
// Alia
// lia
// ia
// a