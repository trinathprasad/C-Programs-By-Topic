#include<stdio.h>
int main()
{
  float a[4]={9,3,1,8}; int i;  //float datatype with array
  for(i=0;i<4;i++)
  {
    printf("a[%d] cell value=%.2f, addr=%u\n",i,a[i], &a[i]);
  }
  return 0;

}

a[0] cell value=9.00, addr=6422284
a[1] cell value=3.00, addr=6422288
a[2] cell value=1.00, addr=6422292
a[3] cell value=8.00, addr=6422296