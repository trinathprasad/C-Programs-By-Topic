int main()
{
  int a;
  switch(a=1,2,3)  
  {
    case 1: printf("Hi");
    break;
    case 2 : printf("Hello");
    break;
    
    default: printf("Bye ");  
  }
  printf("a=%d ", a);
  return 0;
}/*Bye a=1 - 1st 1 is assign to a, then check till end which is 3, so it print the defult value.*/