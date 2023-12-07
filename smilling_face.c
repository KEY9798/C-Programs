/*
Write a program to fill the entire screen with a smilling face. The smilling face has an ASCII value 1.
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=43;i++)
    {
        for(j=0;j<=79;j++)
        printf("%c",1);
    }
    return 0;
}