#include<stdio.h>
int main()
{
  int n,r,max=-9,min=9;
  printf("Enter n value:");
  scanf("%ld",&n);

  do{
    r=n%10;
    if(max<r)max=r;
    if(min>r)min=r;
    n=n/10;
    }
    while(n!=0);
    printf("Max=%d, Min=%d",max,min);
return 0;
}