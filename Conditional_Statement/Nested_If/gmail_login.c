#include<stdio.h>
#include<string.h>
int main()
{
  char user[20], pass[20], cap[10];
  printf("Enter user name:");
  scanf("%s",user);

  if(strcmp(user,"Trinath")==0)
  {
    printf("Enter your Password:");
    scanf("%s",pass);

  if(strcmp(pass,"Indian")==0)
  {
    printf("Enter Captch:");
    scanf("%s",cap);
  
  if(strcmp(cap,"Hyd-1")==0)
  {
    printf("Welcome to gmail");
  }
  else
  {
    printf("Invalid Captcha");
  }
}
else
{
  printf("Invalid Password");
}

}
else
{
  printf("Invalid Username");
}
return 0;
}