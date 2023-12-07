/*
Write a program to print the multiplication table of the number entered by the user. The table should get displayed in the following form:
5 * 1 = 5
*/
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number for its Multiplication Table : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,(num*i));
    }
    return 0;
}