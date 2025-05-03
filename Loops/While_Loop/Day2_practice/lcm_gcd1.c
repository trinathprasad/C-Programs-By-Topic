#include<stdio.h>
int main()
{
  int a,b,i=1,max;
  printf("Enter the value of a,b");
  scanf("%d%d",&a,&b);

  max= a>b ? a :b;

  while(i<=a && i<=b){
    if(max%a==0 && max%b==0)
    {
      printf("LCM=%d",max);
      break;
    }
    max++;

  }
return 0;

}