#include<stdio.h.>
void swap (int x,int y)
{
      // Program to show call by value.....

    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d y=%d\n",x,y);
}
  int main()
  {
      int a=10,b=20;
      swap(a,b);
      printf("a=%d b=%d\n",a,b);

      return 0;
  }