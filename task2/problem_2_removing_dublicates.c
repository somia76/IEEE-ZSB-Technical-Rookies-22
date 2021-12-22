//code of removing duplication of sorting array 

#include <stdio.h>

int main()
{
    int arr[100],temp[100];
    int n , i , j=0 ;
     printf("enter size of array : ");
     scanf("%d",&n);

    printf("Enter sorted array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

   //for removing duplicate : 
    for(i=0;i<n-1;i++)
    {
        if(arr[i] != arr[i+1])
        {
            temp[j++]=arr[i];
       }
    }
    
//after removing ,making array of temp = arr of element -1 ; because of number of elements will be contract 

    temp[j++]=arr[n-1];

    for(i=0;i<j;i++)
    {
        arr[i]=temp[i];
    }

    printf("After removing duplication : \n ");
    for(i=0;i<j;i++)
    {
        printf("%d\t",arr[i]);
    }




}


