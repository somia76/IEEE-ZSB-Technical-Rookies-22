#include<stdio.h>

int num_factor(int *p1,int*p2,int n ,int m);

int main()
{
  int a[10],b[10];
  int n , m ,i,j,count;
  printf("Input\n");
  scanf("%d\t",&n);
   scanf("%d",&m);

  printf("enter arr1\n");

  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("arr 2");

  for(j=0;j<m;j++)
  {
    scanf("%d",&b[i]);
  }
  count = num_factor(&a[0],&b[0],n,m);
  printf("OUTPUT : %d",count);

}



int num_factor(int *p1,int*p2,int n ,int m)
{
   int count =0 ;
   int d , i , check1=0 ,check2 = 0 ;
   for(d=1;d<=p2[0];d++)
   {
       for(i=0;i<n;i++)
       {
           if((d%p1[i])==0)
             check1++;
       }
       for(i=0;i<m;i++)
       {
           if((p2[i]%d)==0)
              check2++;
       }

    if((check1==n)&&(check2==m))
       count++;
   }

   return count ;

}
