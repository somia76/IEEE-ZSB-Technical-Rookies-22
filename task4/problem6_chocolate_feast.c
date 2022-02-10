#include <stdio.h>

int main()
{
 int i , t , n , c, m ;
 scanf("%d",&t);

 for(i=0 ; i<t ;i++)
 {
    scanf("%d %d %d",&n,&c,&m);
    int j =n/c ; 
    int piece = j ;

    while(j>=m)
    {
      piece++ ;
      j=j-m; 
      j++; // num of wrappers 
    }
    printf("%d",piece);
 }
 return 0 ;
}
