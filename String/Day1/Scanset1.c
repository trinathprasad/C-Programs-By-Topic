#include<stdio.h>
int main()
{
  char s[100];
  printf("Enter a string:");
  scanf("%[^.]",s);
  printf("U entered\n");
  puts(s);

  return 0;
}  

// It will show output after you have click on .(Dot)

// Enter a string:Trinath Prasad Mohanty
// Kanha.
// U entered
// Trinath Prasad Mohanty
// Kanha