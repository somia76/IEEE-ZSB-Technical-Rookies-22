// Sales by Mtch 
// There is a large pile of socks that must be paired by color 
// Given an array of integers representing the color of each sock 
// the program determine the number pairs of socks with matching colors there are


int main()
{
	
    int n , i , count=0 ,ar[100] ;

    scanf("%d",&n);

    //int *ar = malloc(sizeof(int)*n);
      int f[100];

    for(i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }

   for(i=0;i<100;i++)
    f[i]=0; // intializing the element of array f[i] with zero 

    for(i=0;i<n;i++)
      f[ar[i]]++;
   
   // if f[arr[i]] accept divising by 2 , count+=1 ..if (3/2 =1.5 ) the count=1 
   for(i=1;i<=100;i++)
    count += f[i]/2;


     printf("\n %d",count);
}
