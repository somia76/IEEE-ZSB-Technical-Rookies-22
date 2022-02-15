#include <stdio.h>
#include<string.h>

int main() {

    char s[100] , t[100];
    int T , i ;
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
    scanf("%s",&s);
    scanf("%s",&t);
    printf("\n");
    }


    while(T!=0)
    {
  int l=strlen(s);
    int flag =0 ;
    for(i=0 ; i<l ; i++)
    {
    for(int j=0;j<l;j++)
    {

    if(t[j]==s[i])
        continue;
    else
        flag++;
    }

    printf("%d \n",flag);
     T--;
    }
    }
}
