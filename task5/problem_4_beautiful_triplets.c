#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n , d ;
   scanf("%d %d ",&n,&d);

   int *a = (int*)malloc(n*sizeof(int));

   int i,j ;
   for (i=0 ; i<n ;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\n");

for(i=0;i<n;i++)
{
    int flag =0 ;
  for(j=0;j<n;j++)
    {
    if((a[j]-a[i]) == d)
       {flag++;}
}
}

  printf("%d",flag);

   return 0 ;


}