// counting valleys 
//Given the sequence of up and down steps during a hike
//this program  find and print the number of valleys walked through.
# include<stdio.h>

int main ()
 {
     int i , n ;
     int high=0 ,hill=0 ,count=0 ;
     scanf("%i",&n);

    char str[n];
    scanf("%s",str);

    for(i=0;i<n;i++)
    {
        if(str[i]=='U')
        {
         high ++ ;
         if(high==0 && hill)
         {
             hill=0;
             count++;
         }
        }
        else if (str[i]=='D')
        {
            if(high==0)
            {
               hill=1;
            }

            high--;
        }
    }

     printf("\n %i", count);
     return 0;
 }