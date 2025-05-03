#include<stdio.h>
int main()
{
  int b,p,f;
  long res=1;
  printf("Enter a value of b & p:");
  scanf("%d%d",&b,&p);

  f=p;

  if(p<0)
  {
    p=-p;
  }
  while(p>=1)
  {
    res=res*b;
    p--;
  }
  if(f<0){
  printf("The result=%.3f", (float)1/res);
  }
  else{
    printf("The result=%ld", res);
  }
  return 0;
}