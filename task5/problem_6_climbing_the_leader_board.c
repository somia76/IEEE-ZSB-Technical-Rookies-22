#include<stdio.h>

int main()
{
    int n , m ,i ;
    scanf("%d\n",&n);
    int *ranked=(int*)malloc(n*sizeof(int));

    for(i=0 ; i<n ; i++)
    {
      scanf("%d",&ranked[i]);
    }

    scanf("\n %d \n",&m);
    int *player=(int*)malloc(m*sizeof(int));

    for(i=0 ; i<m ;i++)
    {
    scanf("%d",&player[i]);
    }
    int a[n];
    a[0]=1;

     for(i=1;i<n;i++)
        {
        if(ranked[i]==ranked[i-1])
            a[i]=a[i-1];
        else
            a[i]=a[i-1]+1;
    }

    a[n]=a[n-1]+1;

    i=n-1;
   int j=0;

    while(j<m)
        {
        while(ranked[i]<player[j] && i>0)
            i--;
        if(ranked[i]==player[j])
        printf("%d\n",a[i]);
        else if(ranked[i]>player[j])
            printf("%d\n",a[i]+1);
            else{
            if(a[i]==1)
              printf("1\n");
            else
                printf("%d\n",a[i]-1);
                }
        j++;
    }
    return 0;
}


