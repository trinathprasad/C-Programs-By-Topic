#include<stdio.h>
int main()
{
  int age;
  char gen;

  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your gender: ");
  scanf(" %c", &gen);

  if(age>=18 && gen=='F' || age>=21 && gen=='M')
  {
    printf("Your are eligible for marraige");
  }
  else{
    printf("Your are not eligible for marraige");
  }

return 0;
}