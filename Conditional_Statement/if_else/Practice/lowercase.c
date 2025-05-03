#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character ");
  scanf("%c", &ch);
  if(ch>='a' && ch<='z'){
  printf("Lowercase character");
  }
else{
printf("Not a lowercase char");
}

return 0;

}