/*
Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.
*/
#include<stdio.h>
int main()
{
    int temp_f;
    float temp_c;
    printf("Enter Temperature in Fahrenheit\n");
    scanf("%d",&temp_f);
    temp_c=(temp_f-32)*5/9;
    printf("%d Fahrenheit = %f Celcius",temp_f,temp_c);
    return 0;
}