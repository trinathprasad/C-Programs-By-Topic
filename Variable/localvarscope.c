#include<Stdio.h>
void show()
{
  int a=10; /*local var*/
  printf("a=%d\n",++a);
}

void main()
{
  show();
  show();
  show();
}