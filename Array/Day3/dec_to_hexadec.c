#include<stdio.h>
int main()
{
  int n,i,a[16]={0};
  printf("printf enter the decimal no:");
  scanf("%d",&n);
  for(i=0;n!=0;n=n/16,i++)
  {
    a[i]=n%16;
  }
  for(i=15;i>=n;i--){
    if(a[i]>=10)
    {
      printf("%2c",87+a[i]); // prntf("%2c",55+a[i]); for capital numbers.
    }else{
    printf("%2d",a[i]);
  }
}
  return 0;
}