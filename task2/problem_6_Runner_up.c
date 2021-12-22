// Find the Runner-Up Score!

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

  //apply bubble sorting first :
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap between two elements
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp ;
            }
        }
    }
    //print the runner up score using arr[n-1] 

    printf("the runner_up score is : %d",arr[n-2]);
}
