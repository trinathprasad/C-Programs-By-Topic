#include<stdio.h>
int main()
{
  int a[30],n,i,j,t,max,min;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j] > a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }
  printf("After sorting:");
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
  printf("\nEnter the nth min and nth max number value:");
  scanf("%d%d",&min,&max);
  if(min==1)
  {
    printf("min=%d\n",a[0]);
  }
  else{
  for(i=1;i<n;i++)
  {
    if(a[i]>a[i-1])
    {
      min--;
      if(min==1)
      {
        printf("min=%d\n",a[i]);
        break;
      }

     }
  }
}
if(max==1)
{
  printf("max=%d\n",a[n-1]);
}
else{
  for(i=n-2;i>=0;i--)
  {
    if(a[i]<a[i+1])
    {
      max--;
      if(max==1)
      {
        printf("max=%d\n",a[i]);
        break;
      }
    }
  }

}

return 0;
  
}