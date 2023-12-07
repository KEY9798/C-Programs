/*
Write a program to determine whether the entered character is a capital letter, a small case letter, a digit or a special symbol.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Character ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("%c is a Capital Letter",ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("%c is a Small Letter",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("%c is a Digit",ch);
    }
    else if( (ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
    {
        printf("%c is a Special Symbol",ch);
    }
    else
    printf("Please Check the Input");
    return 0;
}