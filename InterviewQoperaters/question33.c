#include<stdio.h>
int main()
{
  printf("%d,%d\n",printf("kishore"), sizeof("kishore"));
  printf("%d,%d\n",sizeof("kishore"), printf("Kishore"));
  printf("%d,%d\n",sizeof(printf("kishore")));
  printf("%d\n",printf("kishore\0"));
  printf("%d\n",printf(""));
  printf("%d,%d\n",sizeof(100,1.2), sizeof(1.2,100));
  printf("%d,%d\n",sizeof(100+1.2), sizeof(1.2+100));
  printf("%d.%d\n",sizeof("abc")+'a', sizeof(sizeof("abc")));
   
  return 0;

}