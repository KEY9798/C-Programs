/*
Write a program to calculate simple interest.
*/
#include<stdio.h>
int main()
{
    int p=5000,r=7,t=2;
    float si;
    si=p*r*t/100;
    printf("Simple Interest = %f",si);
    return 0;
}