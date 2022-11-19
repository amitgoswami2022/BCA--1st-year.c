#include<stdio.h>
int main()
      {
             //Program to display sum of series 1+1/2.......rong..


          int n,i;
          float sum=0.0f;
          printf("Enter the number upto which you want the series : ");
          scanf("%d",&n);
          printf("Series is");
          for ( i = 1; i <=n; i++)

        {  
              sum = sum + ((float)1/(float)i);
              printf("%f / %f + ",1,i);

          }
             printf("= %f \n",sum);

             return 0;
      }