// print all prime number from 1 to n input 

#include <stdio.h>

int main()
{
  int n , i,j , prime;
  printf("enter a num. : ");
  scanf("%d",&n);

  printf("the output : \n");

  for(i=2 ; i<=n ; i++)
  {
      prime=1;
      for(j=2 ; j<=i/2 ; j++)
      {
          if(i%j==0)
          {
              prime=0;
              break;
          }
      }

      if(prime==1)
      {
          printf("%d\t",i);
      }
  }

}
