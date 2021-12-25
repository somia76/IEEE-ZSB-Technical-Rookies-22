// group of bird sightings where every element represents a bird type id
// this program determined the id of the most frequently sighted type
//If more than 1 type has been spotted that maximum amount,the prrogram  return the smallest of their ids

# include<stdio.h>

 int main()
{
    int type , n , i, max=0;
    int b[5] = {0};

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&type);
        b[type-1]++;
    }

    for(i=0;i<5;i++)
    {
      if(b[i]>b[max])
            max=i;
    }


  printf("\n %d",max+1);

  return 0 ;
}