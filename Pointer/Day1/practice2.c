#include<stdio.h>
int main()
{
  int a=100, *p=&a;

  printf("a value %d\n",a);
  printf("a addr %u\n",&a);
  printf("p value %d\n",p);
  printf("p addr %u\n",&p);
  printf("a value through p %d\n", *p);
  *p=200;
  printf("a=%d, *p=%d",a,*p);

 return 0;
}

// a value 100
// a addr 6422300
// p value 6422300
// p addr 6422296
// a value through p 100
// a=200, *p=200