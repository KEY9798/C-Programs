/*Program to perform Insertion sort in an Array*/
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
void insertionSort(int arr[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    insertionSort(arr,n);
    printf("\nArray after sorting\n");
    printArray(arr,n);
    return 0;
}