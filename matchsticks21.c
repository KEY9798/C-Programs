/*
write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins.
Rules
- There are 21 matchstick
- The computer asks the player to pick 1,2,3 or 4 matchstick
- After the person picks, the computer does its picking
- Whoever is forced to pick up the last matchstick loses the game
*/
#include<stdio.h>
int main()
{
    int ms=21,uc,cc;
    while(ms>0)
    {
        printf("Total Matchsticks Left = %d\n",ms);
        printf("Pick Matchsticks from (1 to 4) : ");
        scanf("%d",&uc);
        printf("You Pick %d Matchsticks\n",uc);
        if(uc>4)
        {
            printf("Invalid Retry");
            break;
        }
        cc=5-uc;
        printf("Computer Picks %d Matchsticks\n",cc);
        ms=ms-(uc+cc);
        if(ms==1)
        {
            printf("You Loose");
            break;
        }
    }
    return 0;
}