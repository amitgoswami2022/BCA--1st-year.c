#include<stdio.h>
int main()
{     
       // Program to find square of a Number using functions.....


    int square (int);
    int a;
    int ans;
    printf("Enter a number :");
    scanf("%d",&a);
    ans=square (a);
    printf("Square is %d \n",ans);   
}
    int square(int n )
    {
        return n*n;
    }