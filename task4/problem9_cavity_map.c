#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    int arr[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[n][n]);
        }
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0;j<n;j++)
        {
             if( (i>=1)&&(i<n-1) && (j>=1)&&(j<n-1) )
        {
    if( (arr[i][j] > arr[i-1][j]) && (arr[i][j] > arr[i][j+1])&& (arr[i][j] > arr[i+1][j]) && (arr[i][j] > arr[i][j-1]) )
           {
            arr[i][j] = 'x';
            printf("x");
           }
         else
            printf("%d",arr[i][j]);
        }
        else
            printf("%d",arr[i][j]);
    }
    printf("\n");
}
}




