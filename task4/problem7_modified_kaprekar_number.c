#include <stdio.h>

int main()
{
 int i , p , q ,sum ,flag=0;
 scanf("%d %d",&p,&q);

 for(i=p;i<q;i++)
 {
   int n = i ;
   int a =0 ;
  while(n>0)
  {
     n/=10 ;
     a++ ;
  }
  int m = i*i ;
  int g =pow(10,a);
  sum = m%g + m/g ;
  if(sum == i)
  {
      printf("%d \n",sum);
      flag++ ;
  }
 }

  if(flag=0)
    printf("invalid range");

 return 0 ;
}
