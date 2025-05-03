#include <stdio.h>

int main()
{
    char s[100];
    int a[256] = {0}; // Array to store frequency of ASCII characters
    int i;

    printf("Enter the string: ");
    scanf(" %[^\n]", s); // Fixed: correct format to read a full line including spaces

    // Count frequency
    for(i = 0; s[i] != '\0'; i++)
    {
        int n = s[i]; // Get ASCII value of character
        a[n]++;            // Increment frequency count
    }

    // Print the frequency
    for(i = 0; i < 256; i++)
    {
        if(a[i] != 0)
        {
            printf("%c - %d times\n", i, a[i]);
        }
    }

    return 0;
}
