#include<stdio.h>
int main()
{
  char s[100];
  int i,c=1;
  puts("Enter the string");
  gets(s);
  for(i=0;s[i];i++){
    if(s[i]==' '&& s[i+1]!=' ') c++;
  }
  if(s[0]==' ') c--;
  if(s[0]=='\0')c--;
  if(s[i-1]==' ')c--;

  printf("%d words",c);
  return 0;
}