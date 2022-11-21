#include<stdio.h>
int main()
{    
      //  Program to show table of a number using functions....
     
    int n,i;
           printf("Enter any Number :");
           scanf("%d",&n);
           for ( i = 1; i <=10; i++)
           {
               printf("%d*%d=%d\n",n,i,n*i);

           }
           
           return 0;

           
}