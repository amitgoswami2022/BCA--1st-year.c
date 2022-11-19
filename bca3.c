//program to calculate sum of 6 subject & find percentade.



#include<stdio.h>
int main()
{
   float e,h,m,f,p,d,total,avg;
  
   printf("Enter Marks in english : ");
   scanf("%f",&e);
   printf("Enter marks in Hindi : ");
   scanf("%f",&h);
   printf("Enter marks in Discrete Mathematics : ");
   scanf("%f",&m);
   printf("Enter marks in fundamental : ");
   scanf("%f",&f);
   printf("Enter marks in proramming c : ");
   scanf("%f",&p);
   printf("Enter Marks in Data structure : ");
   scanf("%f",&d);

   total=e+h+m+f+p+d;
   avg=total/6;

   
   printf("Average of result= %f",avg );

   return 0;




}