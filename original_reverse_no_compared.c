/*
A five-digit number is entered through the keyboard. Write a program to obtain the reversed numbers and to determine whether the original
and reversed numbers are equal or not.
*/
#include<stdio.h>
int main()
{
    int o_num,h_num,rev=0,temp;
    printf("Enter a Number ");
    scanf("%d",&o_num);
    h_num=o_num;
    while(h_num!=0)
    {
        temp=h_num%10;
        rev=rev*10+temp;
        h_num/=10;
    }
    printf("Original Number = %d\nReversed Number = %d\n",o_num,rev);
    if(o_num==rev)
    printf("Equal");
    else
    printf("Not Equal");
    return 0;
}