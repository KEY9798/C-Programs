/*
write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values from 0 to 255
*/
#include<stdio.h>
int main()
{
    int i=0;
    printf("ASCII Value\t:\tCharacters\n");
    while(i<=255)
    {
        printf("%d\t\t:\t\t%c\n",i,i);
        i++;
    }
    return 0;
}