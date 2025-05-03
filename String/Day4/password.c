#include <stdio.h>
#include <conio.h>  // for _getch()

int main()
{
    char user[100], pass[100], ch, show;
    int i = 0;

    printf("Enter a username: ");
    scanf("%s", user);

    printf("Enter your password: ");
    while ((ch = _getch()) != 13) // 13 is Enter key
    {
        pass[i++] = ch;
        printf("*");
    }
    pass[i] = '\0';

    printf("\nShow password [y/n]: ");
    getchar(); // to consume leftover newline
    scanf("%c", &show);

    if (show == 'y' || show == 'Y')
    {
        printf("Your password is: %s\n", pass);
    }
    else
    {
        printf("Sorry, password protected.\n");
    }

    return 0;
}
