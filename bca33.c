#include<stdio.h>
int m1(int n)
{    
     //  Program to find factorial of a number using recursion...


    if (n<=1)
    
    return 1;
    else 
    return n*m1(n-1);
}

int main()
{
    int n,f;
    printf("Enter any no :");
    scanf("%d",&n);
    f=m1(n);
    printf("factorial %d\n",f);

    return 0;
}