#include<stdio.h>
int main()
{
    // Program to use switch statement Display Monday to Sunday...
  int ch;
  
  printf("Enter User Choice : ");
  scanf("%d",&ch);

  switch (ch)
  {
  case 1: printf("Monday\n");
      break;
  case 2: printf("Tuesday\n");
      break;
  case 3: printf("wednesday\n");
      break;
  case 4: printf("Thrusday\n");
      break;
  case 5: printf("Friday\n");
      break;
  case 6: printf("Saturday\n");
      break;
  case 0: printf("Sunday\n");
      break;
 

  default: printf("Invalid User Choice !! \n ");
      break;
  }


return 0;
}