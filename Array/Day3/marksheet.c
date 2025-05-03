#include<stdio.h>
int main()
{
  char rollno[20], name[30],
  gen[20],dob[15], father[20], mother[20], school[30], id1[30], id2[30],

  subj[6][10]={"Tel", "Eng","Hin", "Mat", "Sci", "Soc"};
  int sub[6], tot=0, i, p=1;
  float avg;
  printf("Enter rollno:");
  scanf("%s",rollno);
  printf("Enter student name:");
  scanf(" %[^\n]",name);
  printf("Enter Gender:");
  scanf(" %[^\n]",gen);
  printf("Enter DOB:");
  scanf(" %[^\n]",dob);
  printf("Enter Father name:");
  scanf(" %[^\n]",father);
  printf("Enter Mother name:");
  scanf(" %[^\n]",mother);
  printf("Enter School name:");
  scanf(" %[^\n]",school);
  printf("Enter Identification mark1:");
  scanf(" %[^\n]", id1);
  printf("Enter Identification mark2:");
  scanf(" %[^\n]",id2);
  printf("Enter 6 sub marks");
  for(i=0;i<6;i++)
  {
    scanf("%d",&sub[i]);
    tot=tot+sub[i];
    if(sub[i]<35)p=0;
  }
  avg=tot/6.0;
  printf("__________________________________________________________");
  printf("\t\t\t BOARD OF SECONDARY EDUCATION");
  printf("\t\t\t ODISHA");
  printf("__________________________________________________________");
  printf("Rollno:%s\t Name:%s\n",rollno,name);
  printf("Gender:%s\t Date of Birth:%s\n",gen,dob);
  printf("Father:%s\t Mother:%s\n",father,mother);
  printf("School:%s\n",school);
  printf("____________________________________________________________");
  printf("Identification Marks");
  printf("______________________________________________________________");
  printf("1.%s\n",id1);
  printf("2.%s\n",id2);
  printf("______________________________________________________________");
  printf("Subject\tMarks\tPass/Fail");
  printf("_______________________________________________________________");
  for(i=0;i<6;i++)
  {
    printf("%s\t%d\t%s\n",subj[i],sub[i],sub[i]>=35?"p":"f");
  }
  printf("_________________________________________________________________");
  printf("%s Tot %d Avg %.2f and got", name,tot,avg);
  if(p==0)printf("failed");
  else if(avg>=75) printf("Distinction");
  else if(avg>=60) printf("1st Class");
  else if(avg>=50) printf("2nd Class");
  else printf("3rd Class");

  printf("________________________________________________________________");
  return 0;
  

}