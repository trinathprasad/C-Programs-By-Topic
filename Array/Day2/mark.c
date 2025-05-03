#include<stdio.h>
int main()
{
  char rollno[20], name[30];
  int sub[6], tot=0,i,p=1;
  float  avg;
  printf("Enter rollno :");
  scanf("%s",rollno);
  printf("Enter student name :");
  scanf(" %[^\n]", name);
  printf("Enter 6 sub marks :");
  for(i=0 ; i<6 ;i++)
  {
    scanf("%d", &sub[i]);
    tot=tot+sub[i];
    if(sub[i]<35)p=0;
  }
  avg=tot/6.0;
  printf("%s ,rollno %s, Total %d, Avg %.2f and got", name,rollno,tot,avg);
  if(p==0)
  {
    printf("Failed");
  }
  else if(avg>=75)
  {
    printf("Distinction");
  }
  else if(avg>=60)
  {
    printf("1st class");
  }
  else if(avg>=50)
  {
    printf("2nd class");
  }else{
    printf("3rd Class");
  }

  return 0;
}