#include<stdio.h>
int main(){
  char s[100];
  int i;
  printf("Enter a string");
  gets(s);
  for(i=0;s[i];i++)
  {
    if(s[i]>='a' && s[i]<='z') /*strupr*/
    {
      s[i]=s[i]-32;
    }
    else if(s[i]>='A' && s[i]<='Z') /*strlwr*/
    {
      s[i]=s[i]+32;
    }
  }
  puts(s);

  return 0;
}

// Enter a string Shri Trinath Store
//  sHRI tRINATH sTORE