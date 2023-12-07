/*Write a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks.
Call this function from main() and print the results in main()*/
#include<stdio.h>
int performance(int *,int *, int);
int main()
{
    int p,c,m;
    float av=0,per=0;
    printf("Enter Marks of Student received in Physics Chemistry and Maths");
    scanf("%d%d%d",&p,&c,&m);
    performance()
    return 0;
}