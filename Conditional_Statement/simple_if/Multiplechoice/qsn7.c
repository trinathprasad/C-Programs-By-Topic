#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	if(printf("%d",a))
	     printf(" %d",a+b);
	else
	   printf(" %d",a-b);

	return 0;
} /*10, 30*/