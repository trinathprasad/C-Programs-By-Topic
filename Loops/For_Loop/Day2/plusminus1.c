#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("-%d ", i);
            sum -= i;  // Subtract even numbers
        } else {
            if (i > 1) printf("+");
            printf("%d ", i);
            sum += i;  // Add odd numbers
        }
    }

    printf("= %d\n", sum);  // Print the final sum
    return 0;
}
