#include <stdio.h>

int main()
{
    int l , w , area , perimeter;
    printf("the input : \n");
     scanf("%d",&l);
     scanf("%d",&w);

    printf("the output:\n");
   area = l*w ;
   perimeter = 2*(l+w);

   printf("%d\n",area);
   printf("%d",perimeter);
}
