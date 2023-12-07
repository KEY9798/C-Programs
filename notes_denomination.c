/*
Consider a currency system in which there are notes of seven denomination, namely, Re1,Rs2,Rs5,Rs10,Rs50,Rs100. If a sum of Rs N is entered
through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs N.
*/
#include<stdio.h>
int main()
{
    int amount,temp,d_100,d_50,d_10,d_5,d_2,d_1;
    printf("Enter Amount\n");
    scanf("%d",&amount);
    temp=amount;
    d_100=temp/100;
    temp%=100;
    d_50=temp/50;
    temp%=50;
    d_10=temp/10;
    temp%=10;
    d_5=temp/5;
    temp%=5;
    d_2=temp/2;
    temp%=2;
    d_1=temp/1;
    temp%=1;
    printf("Smallest number of Notes for Rs %d is d_100 = %d\td_50 = %d\td_10 = %d\td_5 = %d\t\td_2 = %d\t\td_1 = %d",amount,d_100,d_50,d_10,d_5,d_2,d_1);
    return 0;
}