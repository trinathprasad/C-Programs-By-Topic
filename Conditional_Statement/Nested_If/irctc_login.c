#include<stdio.h>
#include<string.h>

int main()
{
  char user[20], pass[20], cap[10];

  printf("Enter user name");
  scanf("%s", user);

  printf("Enter password");
  scanf("%s", pass);

  printf("Enter captcha");
  scanf("%s", cap);

  if(strcmp(user,"Trinath")==0)
  {
    if(strcmp(pass,"Indian")==0)
    {
      if(strcmp(cap,"Hyd-1")==0)
      {
        printf("Welcome to IRCTC");
      }
      else
      {
        printf("Invalid captcha");
      }
    
    }
    else{
      printf("Invalid password");
    }
    
  }
  else{
    printf("Invalid username");
  }
   return 0;  
}