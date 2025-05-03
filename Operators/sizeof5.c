#include<stdio.h>
int main()
{
  float a= 1.1;
  printf("%d,%d\n", sizeof(a),sizeof(1.1));
  printf("%d,%d\n", sizeof(1.1f),sizeof((float)1.1));
  printf("%d,%d\n", sizeof(1.1l),sizeof(1.1L));
  printf("%d,%d\n", sizeof((float)11),sizeof((float)'a'));


  return 0;
}

/* The floating value withot float data type is by defult double data type hence it is 8 bytes*/