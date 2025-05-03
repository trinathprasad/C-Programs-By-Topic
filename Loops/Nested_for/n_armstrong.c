#include<stdio.h>
#include<math.h>
int main()
{
  int n,a,m,r,c,cnt=0,sum=0;
  printf("Enter the first and last digit.");
  scanf("%d%d",&a,&n);
  printf("The armstrong numbers are:");
  for(a=1;a<=n;a++){

  for(sum=c=0,m=a;m;m=m/10)
  {
    c++;
  }
  for(m=a;m;m=m/10)
  {
    r=m%10;
    sum=sum+pow(r,c);
  }
  if(sum==a)
  {
    printf("%d ",a);
    cnt++;
  }
}
printf("\n%d armstrong numbers.",cnt);
return 0;
}