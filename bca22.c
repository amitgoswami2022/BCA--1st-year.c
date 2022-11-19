#include<stdio.h>
int main()
{
     //  Program to add two number using pointer......

    int *p,*q,r,a,b;
    printf("Enter Two Number : ");
    scanf("%d%d",&a,&b);// a=100   b=100

    p=&a; // address of a
    q=&b; // address of b
    r=*p+*q;
    printf("Sum of Numbers : %d\n",r);

    return 0;
}