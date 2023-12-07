/*
Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use logical operators && and ||
*/
#include<stdio.h>
int main()
{
    int yr;
    printf("Enter a Year ");
    scanf("%d",&yr);
    if((yr%4==0 && yr%100!=0) || yr%400==0 )
    printf("%d is a Leap Year",yr);
    else
    printf("%d is a Non Leap year",yr);
    return 0;
}