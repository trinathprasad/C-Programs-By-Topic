#include<stdio.h>
int main()
{
  int a=10; 
  float b=1.2;
  char c='x';

  void *p;
  p=&a;
  printf("a=%d\n",*(int*)p);
  p=&b;
  printf("b=%f\n",*(float*)p);
  p=&b;
  printf("c=%c\n",*(char*)p);
  printf("Void ptr size %d bytes",sizeof(p));

  return 0;
}

// a=10
// b=1.200000
// c=Ü
// Void ptr size 4 bytes