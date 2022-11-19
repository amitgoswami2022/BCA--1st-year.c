#include<stdio.h>
int main()
{
   // 2 4 6 8 10 .....no  ----> Even Number
   // 1 3 5 7 9  .....no  ----> odd Number
    int n;
   printf("Enter any Number : ");
   scanf("%d",&n);

   if(n%2==0)
   {
       printf("Ever Number....\n");
   }
   else
   {
       printf("odd Number.....\n");
   }
   
   return 0;

   




}