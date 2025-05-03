#include <stdio.h>

int main() {
    int a[100], b[100] = {0}, i, j, c, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; i++) {
        if (b[i] != -1) { 
            c = 1; 
            for (j=i+1; j<n; j++) {
                if (a[j] == a[i]) {
                    c++;
                    b[j] = -1; // Mark as counted
                }
            }
            b[i] = c; 
        }
    }

    printf("\nElement Frequencies:\n");
    for (i=0; i<n; i++) {
        if (b[i] != -1) { 
            printf("%d found %d times\n", a[i], b[i]);
        }
    }

    return 0;
}
