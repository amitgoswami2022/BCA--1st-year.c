#include<stdio.h>
int main()
{
     // Program to find whether a string is palindrome or not......

    int n,c,r,s=0;
    printf("Enter any Number : ");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if (c==s)
    {
        printf("Polindrome Number..\n");
            
    }
    else
    {
        printf("Not\n");
    }
    
    
    return 0;
    
}