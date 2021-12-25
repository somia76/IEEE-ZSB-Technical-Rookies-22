// this code generating random password of 10 characters 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
   int randam=0,i;
    srand(time(NULL));
   //array of numbers
   char num[]="0123456789";
   //array of uppercase characters
   char upper[]="QWERTYUIOPSDGFHKJLBVCX";
   //char of lowercase
   char lower[]="asdfghytrqweioplmnbvcxz";
   //array of other characters
   char symbors[]="!@#$%^&~";

   char pass[10];
   randam=rand()%4 ;

   for(i=0 ; i<10 ; i++)
   {
       if(randam==1)
       {
        pass[i]=upper[rand()%22];
         randam = rand()%4;
         printf("%c",pass[i]);
       }
       else if(randam==2)
       {
           pass[i]=num[rand()%10];
           randam = rand()%4 ;
           printf("%c",pass[i]);
       }
       else if (randam==3)
       {
           pass[i]=lower[rand()%23];
           randam = rand()%4 ;
           printf("%c",pass[i]);
       }
        else if (randam==4)
       {
           pass[i]=lower[rand()%8];
           randam = rand()%4 ;
           printf("%c",pass[i]);
       }
   }
}



