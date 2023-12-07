/*
If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks
and percentage marks obtained by the student.Assume that the maximum marks that can be obtained by a student in each subjecy is 100.
*/
#include<stdio.h>
int main()
{
    int p,c,m,e,h;
    float agg_m,per;
    printf("Enter Marks Obtained in 5 Subjects\n");
    scanf("%d%d%d%d%d",&p,&c,&m,&e,&h);
    agg_m=p+c+m+e+h; per=(agg_m/500)*100;
    printf("Aggregate Marks = %f\nPercentage = %f",agg_m,per);
    return 0;
}