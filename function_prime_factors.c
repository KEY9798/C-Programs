/*A Positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
For example, prime factors of 24 are 2,2,2 and 3, whereas prime factors of 35 are 5 and 7.*/
#include<stdio.h>
void prime_factors(int);
int main()
{
    int n;
    printf("Enter any Positive Number ");
    scanf("%d",&n);
    prime_factors(n);
    return 0;
}
void prime_factors(int n)
{
    int i;
    printf("Prime Factors of %d are ",n);
    for(i=2;n>1;)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
            i=2;
            continue;
        }
        i++;
    }
}