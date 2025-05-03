#include<stdio.h>
int main()
{
  float c,f;
  printf("Enter temp in  fahrenheit :");
  scanf("%f", &f);
  c=(f-32)*5/9;
  printf("%.1f%c fahrenheit is %.1f%c Celcius", f,248,c,248);

  return 0;
}