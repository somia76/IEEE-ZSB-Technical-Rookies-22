//number of times that the substring occurs in the given string.

#include<stdio.h>

int main()
{
    char arr[100];
    int i , count=0 , l;
    printf("enter string : ");
    scanf("%s",&arr);

    l=strlen(arr); //finding length of string 
    for(i=0;i<l;i++)
    {
    if(arr[i]==arr[i+1] || ((arr[i]==arr[i+2])&&(arr[i+1]==arr[i+3])) || ((arr[i]==arr[i+3])&&(arr[i+1]==arr[i+4])&&(arr[i+2]==arr[i+5])))
    {
      count++;
    }
    }

    printf("%d",count);
}
