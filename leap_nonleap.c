/*
Write a program to determine whether entered year is leap or not. (use % modulus operator)
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("%d is a Leap year",year);
        }
        else
        printf("%d is a Non Leap year",year);
    }
    else 
    {
        if(year%4==0)
        {
             printf("%d is a Leap year",year);
        }
        else
             printf("%d is a Non Leap year",year);
    }        
    return 0;
}