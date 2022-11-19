#include<stdio.h>

int main()
{
    // 0 1 1 2 3 5 8 13 ......N
    // Program to print Fibonacci Series up to 100.... 

    int n,a=0,b=1,i,c;
    printf("Enter number of Ters : ");
    scanf("%d",&n);

    for (i=1; i <= n; i++)        
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        
    }
    
      return 0;
}