#include<stdio.h>
int main()
{
  int n,i=1,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);

  while(i<=n) /* while(n>=1) */
  {
    sum=sum+i*i;  /* sum=sum+n*n */
    i++;  /*n--*/
  }
  printf("Squares sum=%d\n",sum);
  return 0;
}