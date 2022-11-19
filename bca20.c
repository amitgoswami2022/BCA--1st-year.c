#include<stdio.h>
int main()
{
    // Program to display series and find sum of 1+3+5+....+n.

   int n,i,s=0;
   printf("Enter the volue of n : ");
   scanf("%d",&n);
   for ( i=1; i<=n;i=i+2)

   {
       printf("%d",i);
       s=s+i;

   }
     printf("\n sum of Series : %d",s);

     return 0;



}