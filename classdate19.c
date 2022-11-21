#include<stdio.h>
int main()
{

     int digit;
  
    printf("Enter any digit :");
    scanf("%d",&digit);
    switch (digit)
    {
    case 1 :
        printf("one\n ");
        break;
    
    case  2 :
        printf("two\n ");
        break;
    
    case 3 :
        printf("three\n ");
        break;
    
    case 4 :
        printf("four\n ");
        break;
    
    case 5 :
        printf("five \n");
        break;
    
    default:
             printf("Not a Digit ");
        break;
    }
       return 0;
}