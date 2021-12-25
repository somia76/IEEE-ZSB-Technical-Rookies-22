// kaprekar number 6174
#include<stdio.h>

int main()
{
    int num[4] ;
    int i , j , a , b ;
    printf("Enter 4_digit number : ");
    scanf("%d",&num);

    int asc[4] ,  dsc[4];
    asc[4] = num[4] = dsc[4] ;
    while(num != 6174)
    {

for (i=0 ; i<4 ; i++)
   {

for(j=0;j=(n-i-1);j++)
  {
    if(asc[j]<asc[j+1])
    {
     a = asc[j];
     asc[j] = asc[j+1];
     asc[j+1] = a ;
    }
   }

for(j=0;j=(n-i-1);j++)
    {
        if(dsc[j]>dsc[j+1])
        {
        b = dsc[j];
        dsc[j] = dsc[j+1];
       dsc[j+1] = b ;
        }
    }
  num[i]=asc[i]-dsc[i];
   }
   count++;

   }
   printf("\n %d",count);

}

