/* You have n (n > 1) bottles of water, each bottle is described by remaining 
volume of water and capacity. You should determine if you can pour all 
remaining water into just 2 bottles. 
Input: 
The first line is n(number of bottles) 
The next n lines contain 2 space-separated integers (remaining volume and 
capacity) */

#include<stdio.h>

int main()
{
   int num,i,j, temp;
   int vol[100] , cap[100];
   printf("Input : \n");
   scanf("%d",&num); //num is the number of bottle 

   for(i=0;i<num;i++)
   {
       scanf("%d \t %d",&vol[i],&cap[i]);
   }

  //bubble sorting to the array of capacity 
   for(i=0;i<=num;i++)
   {
     for(j=0;j<=num-i-1;j++)
     {
         if(cap[j]>cap[j+1])
       {
        temp=cap[j];
        cap[j]=cap[j+1];
        cap[j+1]=temp ;
       }
     }
   }
   
  int sum=0,capacity=0;

   for(i=0;i<num;i++)
   {
     sum+=vol[i];
   }
   capacity = cap[1] + cap[0];

// if the capacity of the bottle 1 and bottle 2 is bigger than the remaining volume ,
//it print YES ... else print NO
  if(capacity >= sum)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
}
