/*
Write a program to find out whether the entered number is odd number or even number.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Integer Number ");
    scanf("%d",&num);
    if(num%2==0)
    printf("Even");
    else
    printf("Odd");
    return 0;
}