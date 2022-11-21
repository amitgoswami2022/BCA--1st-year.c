#include<stdio.h>
int main()
{
     // Program to find largest of two numbers using functions....

    int a,b;
    printf("Enter Two number : ");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf(" Largest no.%d\n",a);
    }
    else
    {
        printf("Largest no.%d\n",b);
    }
    
    return 0;
    

    
}