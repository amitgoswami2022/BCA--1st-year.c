#include<stdio.h>
int main()
{
    // 1) 1200 1600 2000 2400
    // 2) 2012 2016 2020 2096
    // 3) 2100 2200 2300 2500
    
    int y;
    printf("Enter any year :");
    scanf("%d",&y);// y=1600
    if (y%400==0 || y%4==0 && y%100!=0) 
    {
        printf("Year is leapyear");
    }
    else
    {
        printf("Year is not leapyear");   
    }
    return 0;
    
    
}