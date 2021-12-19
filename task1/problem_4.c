#include<stdio.h>
void print_rectangle(int n , int m )
{
	 int i,j ;
   for(i=1;i<=n;i++)
   {
	   for(j=1;j<=m;j++)
	   {
		   if(i==1 || i==n || j==1 || j==m)
		     printf("*");
		 else
			 printf(" ");
	   }
	   printf("\n");
	   }
   }


int main()
{

  int row , colum ;
  printf("enter the row & colum : ");
    scanf("%d\n%d",&row,&colum);
	print_rectangle(row,colum);
	return 0;
}
