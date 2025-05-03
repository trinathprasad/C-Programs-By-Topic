#include<stdio.h>
#include<string.h>
int main()
{
  char user[20],pass[20], cap[10];
  printf("Enter user name");
  scanf("%s",user);

  printf("Enter Password");
  scanf("%s",pass);

  printf("Enter Captcha");
  scanf("%s",cap);

  if(strcmp(user,"Trinath")==0 && strcmp(pass,"Indian")==0 && strcmp(cap,"Hyd-1")==0)
  {
    printf("Welcome to SBI Net banking");
  }
  else{
    printf("Invalid user name/password/captcha");
  }

return 0;


}