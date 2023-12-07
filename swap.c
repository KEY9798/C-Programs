/*
Two numbers are input through the keyboard into two locations A and B. Write a program to interchange the contents of A and B.
*/
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("After Swap\nA = %d\tB = %d",a,b);
    return 0;
}