#include <stdio.h>
int sumoarr(int arr[],int n) //using for loop
{
    int i, sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;

}

int recursion(int a[],int n,int i) //recursion
{
    if(i<n)
    return a[i]+recursion(a,n,++i);

    return 0;
}

int whilearr(int arr[],int n)  //while loop 
{
    int i=0 , sum=0;
    while(i<n)
    {
      sum+=arr[i];
      i++;
    }
    return sum;
}

int main()
{
    int arr[100],i,n,sum,sumation , sums;

    printf("enter number of element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    sum=sumoarr(arr,n);
    printf("%d\n",sum);

    sumation=recursion(arr,n,0);
    printf("%d\n",sumation);

    sums=whilearr(arr,n);
    printf("%d",sums);

}
