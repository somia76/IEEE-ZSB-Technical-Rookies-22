#include <stdio.h>

int main()
{
   int b , n , m , i , j , cost;
   scanf("%d %d %d ",&b,&n,&m);

   int *key = malloc(sizeof(int) * n);
   int *usb = malloc (sizeof(int) * m);

       for(i=0;i<n;i++)
   {
    scanf("%d",&key[i]);
   }

   for(i=0;i<m;i++)
   {
       scanf("%d",&usb[i]);
   }

   int max=-1;

   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
        cost = key[i]+usb[j];
        if(cost>b){
            continue;
        }

        if(cost>max){
            max=cost;
        }
       }
   }

   scanf("\n%d",max);
   return 0;
}