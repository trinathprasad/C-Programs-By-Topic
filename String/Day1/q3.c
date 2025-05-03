#include<stdio.h>
int main()
{
  char s[100]="Naresh\t IT\n Ameerpet\0 Hyd ";
  printf("%s,%s",s,"Telengana"); 
  return 0;
}

// Naresh   IT
//  Ameerpet,Telengana