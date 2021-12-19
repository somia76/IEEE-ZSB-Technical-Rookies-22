#include<stdio.h>

int main()
{
    int i,n ;
    int f1=0 , f2=1;
    int next=f1+f2;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("fibonancci series is : ");
    for (i=1;i<=n;i++)
    {
        printf("%d\t",next);
        f1=f2;
        f2=next;
        next=f1+f2;
    }
    return 0;

}
