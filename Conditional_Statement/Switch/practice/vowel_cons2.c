#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("Enter a character:");
  scanf("%c",&ch);
  ch=tolower(ch);
  if(isalpha(ch))
  {
    switch(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
      case 1: printf("vowel");
      break;
      default : printf("Consonant");
    }
  }
    else if(isdigit(ch))
    {
      printf("It is a digit");
    }else {
      printf("It is a special character");
    }
  
  return 0;
}