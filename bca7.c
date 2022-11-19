//Program to print a table of any number.

#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter any Number: ");
   scanf("%d",&n);

   for (i= 1; i <=10; i++)
   {
       printf("%d \n",n*i);
   }
   
   


}