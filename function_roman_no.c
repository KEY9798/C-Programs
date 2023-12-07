/*Write a general-purpose function to convert any given year into its Roman equivalent. Use these Roman equivalents for decimal numbers:
1-I, 5-V, 10-X, 50-L, 100-C, 500-D, 1000-M.*/
#include<stdio.h>
void roman_conversion(int);
int main()
{
    int yr;
    printf("Enter any to Year to find its Roman Equivalent ");
    scanf("%d",&yr);
    roman_conversion(yr);
    return 0;
}
void roman_conversion(int yr)
{
    while(yr>0)
    {
        if(yr/1000)
        {
            printf("M");
            yr%=1000;
            if(yr/1000>1)
            continue;
        }
        if(yr/900)
        {
            printf("CM");
            yr%=900;
        }
        if(yr/500)
        {
            printf("D");
            yr%=500;
        }
        if(yr/400)
        {
            printf("CD");
            yr%=400;
        }
        if(yr/100)
        {
            printf("C");
            yr%=100;
        }
        if(yr/90)
        {
            printf("XC");
            yr%=90;
        }
        if(yr/50)
        {
            printf("L");
            yr%=50;
        }
        if(yr/40)
        {
            printf("XL");
            yr%=40;
        }
        if(yr/10)
        {
            printf("X");
            yr%=10;
        }
        if(yr/9)
        {
            printf("IX");
            yr%=9;
        }
        if(yr/5)
        {
            printf("V");
            yr%=5;
        }
        if(yr/4)
        {
            printf("IV");
            yr%=4;
        }
        if(yr/1)
        {
            printf("I");
            yr%=1;
        }
    }
}