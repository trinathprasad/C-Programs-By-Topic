#include<stdio.h>
int main()
{
  int r,c,nc,nr;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of columns:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      if(c%2==0){
        printf("%2c",96+c);
      }else{
        printf("%2c",64+c);
      }
    }
    printf("\n");
  }
  return 0;

}
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
 A b C d E f G h I j K l M n O p Q r S t U v W x Y z
 A b C d E f G h I j K l M n O p Q r S t U v W x Y z
 A b C d E f G h I j K l M n O p Q r S t U v W x Y z
 A b C d E f G h I j K l M n O p Q r S t U v W x Y z