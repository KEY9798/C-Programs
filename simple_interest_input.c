/*
If principle,rate and time period is input through the keyboard, write a program to calculate simple interest.
*/
#include<stdio.h>
int main()
{
    int p=0,r=0,t=0;
    float si=0;
    printf("Enter Principle ");
    scanf("%d",&p);
    printf("Enter Rate ");
    scanf("%d",&r);
    printf("Enter Time ");
    scanf("%d",&t);
    printf("Simple Interest = %f",si=p*r*t/100);
    return 0;
}