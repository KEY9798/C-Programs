/*
The natural logarithm can be approximated by the following series.
(x-1)/x + 1/2((x-1)/x)² + 1/2((x-1)/x)^3 + 1/2((x-1)/x)^4 + ..........
If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float d,x,p,r,sum=0;
    printf("Enter value of x : ");
    scanf("%f",&x);
    d=(x-1)/x;
    for(i=2;i<=7;i++)
    {
        p=pow(d,i);
        r=p/2;
        sum=sum+r;
    }
    sum=sum+d;
    printf("Sum of first seven terms of this series is %f",sum);
    return 0;
}