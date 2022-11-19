#include<stdio.h>
int main()
{
     // Program to shift inputed data by two bits to the left.

    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);
    a=a<<2;
    
    printf("volue after 2 Bits Left Shift : %d\n",a);

    return 0;
}