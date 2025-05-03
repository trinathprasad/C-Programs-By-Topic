#include<stdio.h>
int main()
{
  int n,l;
  printf("Enter a number:");
  scanf("%d",&n);

  l=n%10;
  while(n>9 || n<-9)
  {
    n=n/10;
  }
  printf("First digit=%d\n",n);
  printf("last digit=%d",l);

  return 0;
}



// #include <stdio.h>

// int main() {
//     int n, first, last;
    
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // Get last digit (always positive)
//     last = n % 10;
    
//     // Convert negative number to positive
//     if (n < 0) {
//         n = -n;
//     }

//     // Get first digit
//     first = n;
//     while (first >= 10) {
//         first /= 10;
//     }

//     printf("First digit: %d\n", first);
//     printf("Last digit: %d\n", last);

//     return 0;
// }
