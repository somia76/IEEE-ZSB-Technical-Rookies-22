// Breaking the Records 
// this program generates the number of highest and lowest scores of Maria 

#include<stdio.h>

int main()
{
    int n , min , max , i ,count1=0, count2=0;

     printf("Enter num of score : ");
     scanf("%d",&n);

    int *a = malloc(sizeof(int)*n);
	
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

    min=max=a[0]; // min & max equal the first score to compare with other scores 
    
    for(i=0;i<n;i++)
    {
     if(max<a[i])
     {
         max=a[i];
         count1++; // the number of highest score 
     }

     if(min>a[i])
     {
         min=a[i];
         count2++; // the number of lowest score 
     }
    }
    

    printf("%d\t%d",count1,count2);
}


