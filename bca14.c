#include<stdio.h>
int main()
{    

     //Program to display arithmetic opreator using switch case....

    char ch;
    int a,b;
    printf("Enter the arithmetic operator\n");
    scanf("%c",&ch);
    printf("Enter two numbers\n");
    scanf("%d%d", &a,&b);


    switch (ch)
    {
    case '+':
            printf("Addition of %d and %d is %d\n",a,b,a+b);       
            break;

     case '-':
            printf("Subtraction of %d and %d is %d\n",a,b,a-b);
            break;
    
     case '*':
            printf("Multiplication of %d and %d is %d\n",a,b,a*b);
            break;
     case '/':
            printf(" Division of %d and %d is %d\n",a,b,a/b);
            break;
     case '%':
            printf(" Modulus of %d and %d is %d\n",a,b,a%b);
            break;

     default:
           printf("Wrong Choice\n");

        break;
      }

       return 0;   

}