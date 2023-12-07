/*Write a program to enter numbers till the user wants. At the end it should display the count of positive,negative and zeroes entered.*/
#include<stdio.h>
int main()
{
    int num,p=0,n=0,z=0;
    char ch;
    while(1)
    {
        printf("Enter any Number ");
        scanf("%d",&num);
        if(num>0)
        p++;
        if(num<0)
        n++;
        if(num==0)
        z++;
        printf("Do You Wish To Continue Y : N - ");
        fflush(stdin);
        scanf("%c",&ch);
        if(ch=='N' || ch=='n')
        break;
    }
    printf("Total Positive Numbers = %d\nTotal Negative Numbers = %d\nTotal Zeros = %d\n",p,n,z);
    return 0;
}