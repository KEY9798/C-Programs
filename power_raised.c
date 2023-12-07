/*
Two numbers are enterd through the keyboard. write a program to find the value of one number raised to the power of another.
*/
#include<stdio.h>
int main()
{
    int a,b,v=1;
    printf("Enter Two Numbers ");
    scanf("%d%d",&a,&b);
    
    while(b>=1)
    {
        v=v*a;
        b--;
    }
    printf("Value = %d",v);
    return 0;
}