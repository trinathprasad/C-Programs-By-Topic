#include<stdio.h>
int main()
{
  int age;
  printf("Enter person age");
  scanf("%d", &age);

  if(age>=18){
    printf("Eligible for vote");
  }
  else{
    printf("Not elible for vote");
  }
  return 0;
}