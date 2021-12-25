//Number Line Jumps
// if position & rate of kangaroos 1 == if position & rate of kangaroos 2 
// program will print YES ; else print N0

#include<stdio.h>

int main()
{
    int x1 , x2 ,v1 , v2 ; //(x1,v1) for kangaroos 1 & (x2, v2) for kangaroos 2
     int count=0;

    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);

   // d1=x1 ,d2=x2 ;
   if(x1==x2)
   {
     count = 1;
   }
   else{
      for (int i=0;x1<=x2; i++)
      {
        x1+=v1;
        x2+=v2;

        if(x1==x2)
        {
          count = 1 ;
          break ;
        }
      }
     }

    if (count== 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }




}
