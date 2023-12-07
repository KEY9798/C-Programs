/*
Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic
salary. Write a program to calculate his gross salary.
*/
#include<stdio.h>
int main()
{
    int b_s;
    float d_a,h_a,g_s;
    printf("Enter Basic Salary\nRS");
    scanf("%d",&b_s);
    d_a = b_s*40/100; h_a=b_s*20/100;g_s=b_s+d_a+h_a;
    printf("Gross Salary = Rs%f",g_s);
    return 0;
}