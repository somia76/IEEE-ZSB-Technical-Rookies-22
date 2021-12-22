//difference between diagonal 

#include<stdio.h>

int main()
{
 int i,j,n;
 int  arr[10][10], sum=0;

 printf("Enter order of matrix:\n");
 scanf("%d", &n);
 printf("Enter matrix elements:\n");
 for(i=0;i< n;i++)
 {
  for(j=0;j< n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%d", &arr[i][j]);
  }
 }

 int d1=0 , d2=0 ;
  for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // finding sum of primary diagonal
            if (i == j)
               {
                   d1=d1+arr[i][j];
               }

            // finding sum of secondary diagonal
            if (i==(n-j-1))
             {
             d2=d2+arr[i][j];
             }
       }
    }
       printf("Sum = %d\n",abs(d1-d2));

    }

