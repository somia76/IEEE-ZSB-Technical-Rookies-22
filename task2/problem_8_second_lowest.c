//second lowest grade 

#include<stdio.h>

int main()
{
    char name[100];
    int grade[100];
    int i ,j,temp , n;
    printf("enter num of student : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);
        scanf("%d",&grade[i]);
    }

    //apply bubble sorting first :
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(grade[j]>grade[j+1])
            {
                temp=grade[j];
                grade[j]=grade[j+1];
                grade[j+1]=temp ;
            }
        }
    }

    printf("\n the second lowest grade : %d",grade[1]);
    printf("\n name of the second lowest grade : %s",name[1]);

}
