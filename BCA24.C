#include<stdio.h>
int main()
{
        // Program to reverse a number using pointer.....
       // input 234... 432
    int n,r;
    printf("Enter Number :");
    scanf("%d",&n);

    while (n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;

    }
       return 0;
}