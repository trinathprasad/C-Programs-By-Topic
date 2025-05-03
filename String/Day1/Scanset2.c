#include<stdio.h>
int main()
{
  char s[100];
  printf("Enter a string:");
  scanf("%[^@#$]",s);
  printf("U entered\n");
  puts(s);

  return 0;
}  
// It will show the output till you have press the @ or # or $ .

// Enter a string:Trinath@gmail.com
// U entered
// Trinath