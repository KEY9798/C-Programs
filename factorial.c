/*
Write a program to find the factorial value of any number entered through the keyboard.
*/
#include<stdio.h>
int main()
{
    int fac,n,i;
    printf("Enter a Number ");
    scanf("%d",&n);
    fac=i=1;
    while(i<=n)
    {
        fac=fac*i;
        i++;
    }
    printf("Factorial of %d = %d",n,fac);
    return 0;
}