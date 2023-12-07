/*Write a program to find the range of a set of numbers entered through the keyboard.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,big,small,range;
    printf("Enter Limit : ");
    scanf("%d",&l);
    printf("Enter %d Numbers\n",l);
    scanf("%d",&n);
    big=small=n;
    l--;
    while(l)
    {
        scanf("%d",&n);
        if(n>big)
        big=n;
        if(n<small)
        small=n;
        l--;
    }
    range=big-small;
    printf("Range = %d",abs(range));
    return 0;
}