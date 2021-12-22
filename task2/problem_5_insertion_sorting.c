// Insertion sorting 

#include <stdio.h>

int main()
{
    int arr[100];
    int n , i , j , temp ;

    printf("enter the size of lis: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


   for(i=1;i<n;i++)
   {
       temp = arr[i];
       j=i-1;

       while(temp<arr[j] && j>=0) //for descending order , change temp<arr[j] to temp>arr[j]  
       {
           arr[j+1]=arr[j];
           --j;
       }
       arr[j+1]=temp ;

   }


   printf("after applying sorting : \n");
   for(i=0;i<n;i++)
   {
       printf("%d\n",arr[i]);
   }
}
