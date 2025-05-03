#include<stdio.h>
int main()
{
  char ch;
  printf("Enter the character :");
  scanf("%c", &ch);

  if(ch>=97 && ch<=122)
  {
    printf("Lowercase Character");
  }
  else if(ch>=65 && ch<=90)
  {
    printf("Uppercase Character");
  }
  else if(ch>=48 && ch<=57)
  {
    printf("Digit");
  }
  else if(ch==32)
  {
    printf("Space character");
  }
  else{
    printf("special character");
  }
  return 0;
}