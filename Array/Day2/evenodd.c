#include<stdio.h>
int main()
{
  int a[100],n,i,e,o,z;
  printf("Enter array size:");
  scanf("%d",&n);
  printf("Enter %d Elements");
  for(e=o=z=0,i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]==0)
    {
      z++;
    }
    else if(a[i]%2==0)
    {
      e++;
    }else{
      o++;
    }
  }
  printf("%d Even, %d Odd, %d Zero's",e,o,z);
  return 0;
}