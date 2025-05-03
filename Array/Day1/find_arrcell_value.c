#include<stdio.h>
int main()
{
  int a[4]={9,3,1,8}, i;
  for(i=0;i<4;i++)
  {
    printf("a[%d] cell value=%d, address=%u\n",i,a[i], &a[i]);
  }
  return 0;
}


a[0] cell value=9, address=6422284
a[1] cell value=3, address=6422288
a[2] cell value=1, address=6422292
a[3] cell value=8, address=6422296