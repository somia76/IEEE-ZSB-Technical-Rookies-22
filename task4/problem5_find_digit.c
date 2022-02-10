#include <stdio.h>
int main()
{
    int i,t,j;
    unsigned long long n,m;
    scanf("%d",&t); // t is the number of n inputs 
   
    for(i=0;i<t;i++)
    {
       int i=0;
       scanf("%llu",&n); //the number that user want to find digit 
       m = n;
       while(m > 0)
       {
           j = m%10;
           if(j!=0 && n%j==0) i++;
           m /= 10;
       }
       printf("%d\n",i);
    }
    return 0;
}
