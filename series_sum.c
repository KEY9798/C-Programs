/*
Write a program to add first seven terms of the following series
1/1! + 2/2! + 3/3! + ..............
*/
#include<stdio.h>
int main()
{
    int i;
    float v,fac=1.0,sum=0;
    for(i=1;i<=7;i++)
    {
        fac=fac*i;
        v=i/fac;
        sum+=v;
    }
    printf("Sum of first seven terms of series 1/1! + 2/2! + 3/3! + ..... is %f",sum);

    return 0;
}