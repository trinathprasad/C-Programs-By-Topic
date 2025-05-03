#include<stdio.h>
int main()
{
  unsigned int a= 32768; int b=32768;
  printf("%d,%d\n", sizeof(100),sizeof(-100));
  printf("%d,%d\n", sizeof(32767),sizeof(32768));
  printf("%d,%d\n", sizeof(a),sizeof(b));
  printf("%d,%d\n", sizeof(32768u),sizeof(32768u));
  printf("%d,%d\n", sizeof ((int)32768));
  printf("%d,%d\n", sizeof((unsigned)32768));
  printf("%d,%d\n", sizeof(100L),sizeof(100l));
  printf("%d,%d\n", sizeof((float)100),sizeof((char)100));
  printf("%d,%d\n", sizeof(70000u),sizeof((unsigned)70000));

  return 0;
  
}