#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n , k , q ;
   scanf("%d %d %d ",&n,&k,&q);

   int *a = (int*)malloc(n*sizeof(int));
   int *quires = (int*) malloc(q*sizeof(int));

   int i ;
   for (i=0 ; i<n ;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\n");

   for (i=0;i<q;i++)
   {
       scanf("%d",&quires[i]);
   }

   while(k!=0)
   {
  for(i=0;i<n;i++)
  {
     int j , temp ;
     temp = a[n-1];
     for(j=n-1;j>0;j--)
     {
       a[j]=a[j-1];
     }
     a[0]=temp;
  }
  k--;
   }


    for (i=0;i<q;i++)
   {
       scanf("%d",a[quires[i]]);
   }
   return 0 ;


}
