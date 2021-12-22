//code of palindrome "word,number,or other sequence of charcters that reads the same backward or forward

#include <stdio.h>
#include <string.h>
int main()
{
   char str[100]; //array of charcters to take a string from user 
   int i,j,l,count;

   printf("Enter the string that you want to test it : ");
   scanf("%s",&str);

   l=strlen(str); //for finding the length of the string

   //testing if the forward of string is the same of backward
for(i=0,j=l-1,count=0 ; i<l ; i++,j--)
{
    if(str[i]==str[j])
    {
        count++;
    }
}


        if(count == l)
        {
            printf("\n YES");
        }
        else
        {
            printf("\n NO");
        }


}


