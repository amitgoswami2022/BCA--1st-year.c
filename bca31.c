#include<stdio.h>
void swap(int *p,int *q)
{
     // Program to show call by refernce....

    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("p=%d q=%d\n",*p,*q);
}
 int main()
 {
     int a=100,b=200;
     swap(&a,&b);
     printf("a=%d b=%d\n",a,b);

     return 0;

 }