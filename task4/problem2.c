#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[10] ;
    int n , i ;
    char count[100] ;
    scanf("%s",&str);

    printf("\n enter number of repeat : ");
    scanf("%d",&n);

    for(;;)
    {
     strcpy(count , str)  ;
    }

    int flag=0;
    for(i=0 ; i<=n ;i++)
    {
     if (count[i]=='r')
     {
       flag++;
     }
    }
    printf("%d",flag);


return 0;

}

