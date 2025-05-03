#include<stdio.h>
int main()
{
  int a[3]={10,25,18},*p,i;
  p=&a[0]; /* p=a  / p=&a */
  printf("Elements are:");
  for(i=0;i<3;i++)
  {
    // printf("%4d",*(p+i));
    printf("%4d",*(i+p));
  }
  return 0;
 
}
// Elements are:  10  25  18