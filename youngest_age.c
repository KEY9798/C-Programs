/*
If the ages of Ram, Shyam and Ajay are input through the keyboard,write a program to determine the youngest of the three.
*/
#include<stdio.h>
int main()
{
    int r,s,a;
    printf("Enter age of Ram Shyam and Ajay\n");
    scanf("%d%d%d",&r,&s,&a);
    if(r<s && r<a)
    printf("Ram is Youngest\n");
    if(s<r && s<a)
    printf("Shyam is Youngest\n");
    if(a<r && a<s)
    printf("Ajay is Youngest");
    if(r==a && a==s)
    printf("Ram Shyam and Ajay are of same Age");
    return 0;
}