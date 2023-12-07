/*
Write a program to print all the Armstrong numbers between 1 to 500. 
*/
#include<stdio.h>
int main()
{
    int i=1,sum,n,t;
    printf("Armstrong Numbers from 1 to 500\n");
    while(i<=500)
    {
        sum=0;
        n=i;
        while(n)
        {
            t=n%10;
            sum=sum+(t*t*t);
            n=n/10;
        }
        if(i==sum)
        {
            printf("%d\t",i);
        }
        i++;
    }
    return 0;
}