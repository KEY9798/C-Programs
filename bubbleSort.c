/*Program to perform Bubble Sort in an Array*/
#include<stdio.h>
#include<stdbool.h>
void inputArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
}
int main()
{
    int arr[10],n;
    n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter 10 elements of Array\n");
    inputArray(arr,n);
    printf("Array before sorting\n");
    printArray(arr,n);
    bubbleSort(arr,n);
    printf("\nArray after sorting\n");
    printArray(arr,n);
    return 0;
}