/*Program to perform Selection Sort in an array.*/
#include<stdio.h>
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
void selectionSort(int arr[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        swap(&arr[min],&arr[i]);
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
    selectionSort(arr,n);
    printf("\nArray after sorting\n");
    printArray(arr,n);
    return 0;
}