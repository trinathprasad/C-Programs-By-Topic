#include<stdio.h>
int main(){
  int a[16]={0},i,n;
  printf("the decimal no");
  scanf("%d",&n);
  for(i=0;n!=0;n=n/8,i++)
  {
    a[i]=n%8;
  }
  for(i=15;i>=0;i--)
  {
    printf("%2d",a[i]);
  }
  return 0;
}