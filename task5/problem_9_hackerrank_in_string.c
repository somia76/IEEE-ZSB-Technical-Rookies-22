#include<stdio.h>
#include <string.h>
char *hackerrank(char *string)
{
    int total;
    int i;
    int j;    
    char *comp = "hackerrank\0";
    
    i = 0;
    j = 0;
    while (string[i] != '\0')
    {
        if (string[i] == comp[j])
            j += 1;
        i += 1;
    }
    if (strlen(comp) == j)
        return ("YES");
    else
        return ("NO");
}
int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
        printf("%s\n", hackerrank(s));

    }
    return 0;
}