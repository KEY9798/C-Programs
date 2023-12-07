/*Write a function power (a,b), to calculate the value of a raised to b.*/
#include<stdio.h>
int power(int,int);
int main()
{
    int a,b;
    printf("Enter Base and Exponent Number\n");
    scanf("%d%d",&a,&b);
    printf("%d raised to %d = %d",a,b,power(a,b));
    return 0;
}
int power(int a,int b)
{
    int i,k=1;
    for(i=b;i>0;i--)
    {
        k=k*a;
    }
    return(k);
}