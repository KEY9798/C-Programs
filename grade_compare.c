/*
A certain grade of steel is graded according to the following conditions:
i) hardness must be greater than 50
ii) carbon content must be greater than 0.7
iii) tensile strength must be greater than 5600

the grades are as follows:
grade is 10 if all three conditions are met
grade is 9 if conditions i) and ii) are met
grade is 8 if conditions ii) and iii) are met
grade is 7 if conditions i) and iii) are met

write a program which will require the user to give values of hardness, carbon content and tensile strength of the steel under coonsideration and 
output the grade of the steel
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float h,c,t;
    printf("Enter Data of Hardness,Carbon Content and Tensile Strength ");
    scanf("%f%f%f",&h,&c,&t);
    if(h>50 && c<0.7 && t>5600)
    {
        printf("Hardness = %f Carbon Content = %f Tensile Strength = %f\nGrade = 10",h,c,t);
        exit(0);
    }
    if(h>50 && c<0.7 && t<=5600)
    {
        printf("Hardness = %f Carbon Content = %f Tensile Strength = %f\nGrade = 9",h,c,t);
        exit(0);
    }
    if(h<=50 && c<0.7 && t>5600)
    {
        printf("Hardness = %f Carbon Content = %f Tensile Strength = %f\nGrade = 8",h,c,t);
        exit(0);
    }
    if(h>50 && c>=0.7 && t>5600)
    {
        printf("Hardness = %f Carbon Content = %f Tensile Strength = %f\nGrade = 7",h,c,t);
        exit(0);
    }
    if(h>50 || c<0.7 || t>5600)
    {
        printf("Hardness = %f Carbon Content = %f Tensile Strength = %f\nGrade = 6",h,c,t);
        exit(0);
    }
    if(h<=50 && c>=0.7 && t<=5600)
    printf("Hardness = %f Carbon Content = %f Tensile Strength = %f\nGrade = 5",h,c,t);
    return 0;
}