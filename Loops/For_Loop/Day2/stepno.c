#include<stdio.h>
int main()
{
  int n,r1,r2;
  printf("Enter a number:");
  scanf("%d",&n);
  for(r1=n%10,n=n/10 ; n ; n=n/10){
    r2=n%10;
    if(r1-r2==1 || r2-r1==1){
      r1=r2;
    }else{
      printf("Not a step number");
      return 0;
    }
  }
  printf("Step NO");

  return 0;
}