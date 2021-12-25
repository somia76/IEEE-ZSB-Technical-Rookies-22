// Drawing Book 
// this program determine the minimum number of pages to turn

#include<stdio.h>
int main()
{
int n,p,average=0; // n is the number of pages in the book ; p is the page number to turn to

scanf("%d \n %d",&n,&p);

  average=(n/2)-(p/2);

if(average>p/2)
    average=p/2;

printf("%d",average);

return 0;
}
