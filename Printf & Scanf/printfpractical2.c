#include<stdio.h>
#include<math.h>
int main()
{
  printf("%f\n", 1.0);
  printf("%.0f\n", 1.0);
  printf("%.1f\n", 1.0);
  printf("%.2f\n", 1.0);
  printf("%.0f\n", 1.9);
  printf("%.0f\n", 1.1);
  printf("%.0f\n", 1.5);
  printf("%.0f\n", floor(1.5));
  printf("%.0f\n", ceil(1.5));
  printf("%.10f\n", 1.5);
  printf("%10.2f\n", 1.5);
  printf("%-10.2f\n", 1.5);

return 0;

}