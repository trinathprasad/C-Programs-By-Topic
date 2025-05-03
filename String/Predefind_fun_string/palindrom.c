#include<stdio.h>
#include<string.h>
int main()
{
char s1[20],s2[20];
printf("Enter a string:");
scanf("%s",s1);
strcpy(s2,s1);
strrev(s2);
if(stricmp(s1,s2)==0)
{
  printf("Palindrom");
}
else{
  printf("Not a palindrom");
}
return 0;
}