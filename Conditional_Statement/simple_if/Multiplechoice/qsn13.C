#include<stdio.h>
int main()
{
	int a=1;
	a++;
	if(a==1)
		printf("1st Block");
	else (a==2)
		printf("2nd Block");
	
	return 0;
} /*error- else does not contain any condition*/