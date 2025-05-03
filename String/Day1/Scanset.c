#include<stdio.h>
int main()
{
  char s[100];
  printf("Enter a string:");
  scanf("%[^\n]",s);
  printf("U entered\n");
  puts(s);

  return 0;
}  
// Enter a string:Trinth Prasad Mohanty
// U entered
// Trinth Prasad Mohanty