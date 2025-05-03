#include<stdio.h>
int main()

{
  char s[100];
  int i,v,c,d,spa,spe;
  printf("Enter a string.");
  gets(s);
  for(i=v=c=d=spa=spe=0;s[i];i++)
  {
    if(s[i]>='a' && s[i]<='z')
    {
      s[i]=s[i]-32;
    }
    if(s[i]>='A' && s[i]<='Z')
    {
      if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ){
        v++;
      }else{
        c++;
      }
    }else if(s[i]>='0' && s[i]<='9')
      {
      d++;
      }
  else if(s[i]==' ')
  {
    spa++;
  }else{
    spe++;
  }
}
  printf("%d vowels, %d consonant, %d digits, %d spaces, %d special chars",v,c,d,spa,spe);

  return 0;
}

Enter a string.Bahu Bali - 2
4 vowels, 4 consonant, 1 digits, 3 spaces, 1 special chars