#include<stdio.h>

int main()
{
    int arr[100],diff,i,j,n;
    printf("enter number of array : ");
    scanf("%n");

    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

    for(i=0,j=n-1,diff=0;i<n;i++,j--)
    {
      if(arr[i]==arr[j])
      {
        diff=abs(i-j);
      }

     }
	  printf("%d",diff);

}
