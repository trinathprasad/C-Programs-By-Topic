#include<stdio.h>
int main()
{
  long int n;
  int c=1;
  printf("Enter a number:");
  scanf("%ld",&n);
  do
  {
    c++;
    n=n/10;
  }
  while(n!=0);
  printf("It is a %d digit no",c);
  return 0;
}

// #include <stdio.h>
// int main() {
//     long int n;
//     int c = 0;  // Initialize count to 0

//     printf("Enter a number: ");
//     scanf("%ld", &n);  // Correct format specifier

//     if (n == 0) {
//         c = 1;  // Special case: 0 has one digit
//     } else {
//         while (n != 0) {
//             c++;
//             n = n / 10;
//         }
//     }

//     printf("It is a %d digit number.\n", c);
//     return 0;
// }
