#include<stdio.h>
int main()
{
  int n,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);

  while(n) /* while(n>=1) */
  {
    sum=sum+n*n;  /* sum=sum+n*n */
    n--;  /*n--*/
  }
  printf("Squares sum=%d\n",sum);
  return 0;
}