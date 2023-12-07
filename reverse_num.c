/*
If a five-digit number is input through the keyboard, write a program to reverse the number.
*/
#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("Enter a 5 digit Number ");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    printf("Reverse Number = %d",rev);
    return 0;
}