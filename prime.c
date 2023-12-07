/*
Write a program to print all prime numbers from 1 to 300.
*/
#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Prime Numbers from 1 to 300\n");
    for(i=1;i<=300;i++)
    {
        j=2;
        num=i;
        while(j<=num-1)
        {
            if(num%j==0)
            {
                break;
            }
            j++;
        }
        if(num==j)
        {
            printf("%d  ",num);
        }
    }
    return 0;
}