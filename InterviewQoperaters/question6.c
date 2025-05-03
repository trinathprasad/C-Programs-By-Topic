#include<stdio.h>
int main()
{
  1 && printf("I ");
  0 || printf("Love ");
  0 && printf("Java");
  -1 && printf("Python");
  return 0;
}

/* In || operation when left exp true,  right exp not checked
  In && operation when left exp false, rigt exp not chekced*/