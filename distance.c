/*
The distance between two cities (in km) is input through the keyboard. Write a program to convert and print this distance in meters,feet,inches
and centimeters.
*/
#include<stdio.h>
int main()
{
    int d_k;
    float d_m,d_c,d_i,d_f;
    printf("Enter Distance in Kilometer ");
    scanf("%d",&d_k);
    d_m=d_k*1000; d_c=d_m*100; d_i=d_c/2.54; d_f=d_i/12;
    printf("%d km = %f m\n%d km = %f cm\n%d km = %f inch\n%d km = %f feet",d_k,d_m,d_k,d_c,d_k,d_i,d_k,d_f);
    return 0;
}