/*
Write a program to find the absolute value of a number entered through the keyboard.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a Number ");
    scanf("%d",&num);
    printf("Absolute value of %d is %d",num, abs(num));
    return 0;
}