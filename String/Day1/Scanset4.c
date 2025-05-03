#include<stdio.h>
int main()
{
  char s[100];
  printf("Enter a string:");
  scanf("%[^A-Z 0-9]",s);
  printf("U Entered\n");
  puts(s);
}
// Enter a string:bahu bali 2
// U Entered
// bahu , (because space is also there)