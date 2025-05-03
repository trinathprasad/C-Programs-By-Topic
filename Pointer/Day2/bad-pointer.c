#include<stdio.h>
int main()
{
  int *p; /*This call Bad Pointer because pointer is decalred but the value is not initiatlized*/
  printf("p stored addr=%u\n p stored addr=%d\n");

  return 0;
}
//  p stored addr=4199120
//  p stored addr=2408448