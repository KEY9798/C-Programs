/*Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not.*/
#include<stdio.h>
void leap_nonleap(int);
int main()
{
    int yr;
    printf("Enter an Year ");
    scanf("%d",&yr);
    leap_nonleap(yr);
    return 0;
}
void leap_nonleap(int yr)
{
    if((yr%4==0 && yr%100!=0) || yr%400==0)
    printf("%d is a Leap Year",yr);
    else
    printf("%d is a Non Leap Year",yr);
}