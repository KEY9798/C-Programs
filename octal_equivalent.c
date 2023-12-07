/*Write a program to receive an integer and find its octal equivalent.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,count=0,oct=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        t=n%8;
        oct=oct+t*pow(10,count);
        n=n/8;
        count++;
    }
    printf("Octal Equivalent = %d",oct);
    return 0;
}