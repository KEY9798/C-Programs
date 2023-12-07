/*
If cost price and selling price of an item are input through keyboard, Write a program to determine whether the seller has made profit
or incurred loss. Also determine how much profit he made or loss he incurred
*/
#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter Cost Price Rs ");
    scanf("%d",&cp);
    printf("Enter Selling Price Rs ");
    scanf("%d",&sp);
    if(sp>cp)
    {
        p=sp-cp;
        printf("You made Profit = Rs %d",p);
    }
    else if(cp>sp)
    {
        l=cp-sp;
        printf("You made Loss = Rs %d",l);
    }
    else
    printf("Cheers");
    return 0;
}