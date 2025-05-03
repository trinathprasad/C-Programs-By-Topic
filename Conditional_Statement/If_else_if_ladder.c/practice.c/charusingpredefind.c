#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("Enter the charcter:");

  ch=getchar();
  
  if(isupper(ch))
  {
    printf("Uppercase character");
  }
 else if(islower(ch))
  {
    printf("Lowercase character");
  }
  else if(isdigit(ch))
  {
    printf("Digit");
  }
  else if(isspace(ch))
  {
    printf("Space");
  }
  else 
  {
    printf("Not Spacial character");
  }
  return 0;
}