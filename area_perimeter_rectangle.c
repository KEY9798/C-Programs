/*
Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
*/
#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("Enter Length and Breadth of a Rectangle\n");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    if(a>p)
    printf("Area of Rectangle (%d) with length = %d breadth = %d is greater than its Perimeter (%d)",a,l,b,p);
    else
    printf("Area of Rectangle (%d) with length = %d breadth = %d is less than its Perimeter (%d)",a,l,b,p);
    return 0;
}