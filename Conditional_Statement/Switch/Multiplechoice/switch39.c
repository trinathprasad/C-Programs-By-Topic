int main()
{
  int a=0;
  switch(++a || ++a || ++a)
  {
    case 0: printf("Jhanvi kapoor");
    break;
    case 1: printf("Rashmika mandana");
    break;
    case 2: printf("Alia bhatt");
    break;
    default: printf("shradda kapoor");

    }
    printf("a=%d",a);
    return 0;
  }/*Rashmika mandana a=1*/