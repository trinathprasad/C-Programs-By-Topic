#include<stdio.h>
float a; int b; char c; /* Global var- intitiate with o*/
int main()
{
float x; int y; char z; /* Local var- initiate garbage*/
printf("a=%f, b=%d, c=%c\n",a,b,c);
printf("x=%f, y=%d, z=%c\n",x,y,z);

return 0;
}