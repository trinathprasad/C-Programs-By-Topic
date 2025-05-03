#include<stdio.h>
int main(){
  long n;
  int c;

  printf("Enter a number:");
  scanf("%ld",&n);
  
  c= printf("%d",n);
  if(n<0) c--;
  printf("  is a %d digits no",c);
  return 0;
}