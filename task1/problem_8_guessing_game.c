#include <math.h>
#include<stdio.h>
#include<stdlib.h>

void guess(int n)
{
    int num ,guess ,numofguess=0;
    num= rand()%10;

    printf("guess a number between 1 and 10 : ");

    do{
        if (numofguess>9)
        {
            printf("\nyou loose\n");
            break;
        }

        scanf("%d",&guess);
        if(guess>num)
        {
            printf("incorrect guess\n");
            numofguess++;
        }

        //when user guess higher than actual number
        else {
            printf("you guessed the number in %d attemp",numofguess);
        }
    }while(guess!=num);
}

//driver code

int main()
{
    int n=100;
    //function
    guess(n);
    return 0;
}
