/*
Write a program to receive Cartesian co-ordinates (x,y) of a point and convert them into polar co-ordinates (r,Φ).
r=sqrt(x²+y²) and Φ=tan-¹(y/x)
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,degree;
    float r,phi;
    printf("Enter Cartesian Co-ordinates x and y\n");
    scanf("%d%d",&x,&y);
    r=sqrt(x*x+y*y);
    phi=atan(y/x);
    printf("Polar Co-ordinates of (%d,%d) is (%f,%f)\n",x,y,r,phi);
    degree=phi*180/3.141592;
    printf("Polar Co-ordinates of (%d,%d) in degree is (%f,%d)",x,y,r,degree);
    return 0;
}