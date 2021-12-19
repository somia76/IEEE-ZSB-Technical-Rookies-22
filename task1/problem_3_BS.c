//Code of Binary search:



#include<stdio.h>

int main()
{
    int arr[10];
    int size = 10;
    int count , right , left ,i,x,flag=0 ,temp;

    for(x=0;x<10;x++)
    {
        printf("enter number %d : ",x);
        scanf("%d",&arr[x]);
    }


    //algo of sorting:
    for(x=0;x<10;x++)
    {
        if (arr[x]>arr[x+1])
        {
            temp=arr[x];
            arr[x]=arr[x+1];
            arr[x+1]=temp;
        }
    }

    printf("enter the number to search : ");
    scanf("%d",&i);

    left=0;
    right=size-1;

    count=(right-left/2)+left;


//algo of binary search:
    while(left<right)
    {
        //check if the element is found:
        if(i==arr[count])
        {
            printf("the value is found");
            flag=1;
            break;
        }
        else if(i>arr[count])
        {
            left=count+1;
        }
        else if(i<arr[count])
        {
            right=count-1;
        }

        count=(right-left/2)+left;
    }

    if (flag==0)
    { printf("the value is not found");}


}
