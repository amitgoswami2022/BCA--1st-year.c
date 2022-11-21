#include<stdio.h>
int main()
{     
     // Program to swap two numbers using functions....


    int a,b,temp;
    printf("Enter Two Number :");
    scanf("%d%d",&a,&b); // a=100  b=200
   /*temp=a;
    a=b;
    b=temp;*/

    a=a+b; // a=100+200=300
    b=a-b; // b=300-200=100
    a=a-b; // a=300-100=200

    printf("a=%d b=%d",a,b); // 200  100

    return 0;

}