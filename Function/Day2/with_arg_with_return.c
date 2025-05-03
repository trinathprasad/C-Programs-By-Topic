//function with argument with return value
#include<stdio.h>
float avg(float,float);
int main()
{
float a,b,result;
printf("Enter two floating values");
scanf("%f%f",&a,&b);
result=avg(a,b);
printf("Avg=%.2f",result);
return 0;
}
float avg(float a ,float b)
{
  return (a+b)/2;
}