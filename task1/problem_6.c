#include<stdio.h>

int main()
{
   int i , j,n,sum=0 ;

   printf("Enter num. : ");
   scanf("%d",&n);

   if(n<1||n>=100)
   {
       printf("Wrong output");
   }

   for(i=1;i<=n;i++)
   {
       sum+=i;
   }
   printf("the sum is : %d",sum);
}

