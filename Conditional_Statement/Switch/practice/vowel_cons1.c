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
    switch(ch =='a'|| ch =='e' || ch =='i'|| ch =='o'|| ch =='u')
    {
      case 1: printf("Vowel");
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