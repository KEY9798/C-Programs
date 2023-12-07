/*Write a function to calculate the factorial value of any integer entered through the keyboard.*/
#include<stdio.h>
int fac(int);
int main()
{
    int n;
    printf("Enter any Integer to find its Factorial\n");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,fac(n));
    return 0;
}
int fac(int n)
{
    int i,f;
    for(f=n,i=n-1;i>0;i--)
    f=f*i;
    return (f);
}