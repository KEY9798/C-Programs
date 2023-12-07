/*
According to Gregorian calender it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what
is the day on 1st January of this year.
*/
#include<stdio.h>
int main()
{
    int b_year=1900,e_year,diff,t_days,day,leap=0;
    printf("Enter a Year ");
    scanf("%d",&e_year);
    diff=e_year-b_year;
    while(b_year<e_year)
    {
        if(b_year%100==0)
        {
            if(b_year%400==0)
            leap++;
        }
        else
        {
            if(b_year%4==0)
            leap++;
        }
        b_year++;
    }
    t_days=(diff-leap)*365+(leap*366);
    day=t_days%7;
    printf("1st January %d - ",e_year);
    if(day==0)
    {
        printf("Monday");
    }
    if(day==1)
    {
        printf("Tuesday");
    }
    if(day==2)
    {
        printf("Wednessday");
    }
    if(day==3)
    {
        printf("Thursday");
    }
    if(day==4)
    {
        printf("Friday");
    }
    if(day==5)
    {
        printf("Saturday");
    }
    if(day==6)
    {
        printf("Sunday");
    }
    return 0;
}