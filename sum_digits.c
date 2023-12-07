/*
If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
*/
#include<stdio.h>
int main()
{
    int n,sum=0,temp;
    printf("Enter a 5 digit Number ");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        sum+=temp;
        n=n/10;
    }
    printf("Sum = %d",sum);
    return 0;
}