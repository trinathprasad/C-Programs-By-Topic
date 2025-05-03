#include<stdio.h>
int main()
{
  goto a;
  c:
  printf("Nares IT\n");
  return 0;
  b:
  printf("Ameerpet\n");
  goto c;
  a:
  printf("Hydrabad\n");
  goto b;
}