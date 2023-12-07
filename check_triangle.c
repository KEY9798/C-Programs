/*
Write a program to check whether the triangle is isosceles,equilateral,scalene or right angled triangle.
*/
#include<stdio.h>
int main()
{
    int s1,s2,s3,a,b,c;
    printf("Enter all sides of a Triangle ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3)
    {
        if(s1==s2 && s1==s3)
        {
            printf("Equilateral Triangle");
        }
        else if((s1==s2) || (s2==s3) || (s1==s3))
        {
            printf("Isoscles Triangle\n");
        }
        else
        {
            printf("Scalene Triangle\n");
        }
        a=(s1*s1)+(s2*s2);
        b=(s1*s1)+(s3*s3);
        c=(s2*s2)+(s3*s3);
        if((a==s3*s3) || (b==s2*s2) || (c==s1*s1))
        {
            printf("Right Angled Triangle");
        }
    }
    else
    printf("Invalid Triangle");
    return 0;
}