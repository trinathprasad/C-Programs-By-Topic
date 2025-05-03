#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z'){
    ch+=32;
  }
  if(ch>='a' && ch<='z'){
    switch(ch)
    {
      case 'a': case 'e': case 'i': case 'o': case 'u':
      printf("Vowel");
      break;
      default:printf("Consonant");
    }
}
else if(ch>='0' && ch<='9')
{
  printf("It is a digit");
}else{
  printf("It is a special char");
}
return 0;
}