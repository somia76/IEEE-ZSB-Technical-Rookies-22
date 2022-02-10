#include<stdio.h>


int main(void)
{

    int d1 , m1 , y1 ;
    int d2 , m2 , y2 ,fine=0 ;

    scanf("%d\t%d\t%d",&d1,&m1,&y1);
    scanf("\n%d\t%d\t%d",&d2,m2,y2);

    if(d1<=d2 && m1==m2 && y1==y2)
    {
        printf("%d ",fine);
    }
    else if(d1>d2 && m1==m2 && y1==y2)
    {
      fine = 15*(d1-d2);
    }
    else if (m1>m2 && y1==y2)
    {
    fine = 500 * (m1-m2);
    }
    else if (y1>y2)
    {
    fine=10000;
    }
        printf("%d",fine);

   return 0 ;
}

