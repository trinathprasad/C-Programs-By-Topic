#include<stdio.h>
int main()
{
  char s[100];
  printf("Enter a string:");
  scanf("%[^0-9]",s);
  printf("U entered\n");
  puts(s);

  return 0;
}  

// It will show the output till you have press 0-9 .

// Enter a string:Hydrabad1333
// U entered
// Hydrabad