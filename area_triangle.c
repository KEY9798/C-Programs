/*
If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    printf("Enter Sides of a Triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle = %f",area);
    return 0;
}