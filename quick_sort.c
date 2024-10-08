// Quick sort


#include<stdio.h>
#include<conio.h>
quicksort(int a[],int l,int h);
partition(int a[],int l,int h);
int main()
{
    int n,a[10],i,h,l;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    printf("Enter the array element:\n");
     // printing the original array 
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    // calling quickSort() to sort the given array
    quicksort(a,l,n);

    // printing the sorted array 
    printf("After quick sort:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

quicksort(int a[],int l,int h)
{
    int j;

    if(l<h)
    {
         // call Partition function to find Partition Index
        j=partition(a,l,h);

        // Recursively call quickSort() for left and right 
        // half based on partition Index
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

partition(int a[],int l,int h)
{
    int pivot,i,j,temp,n;
    pivot=a[l];
    i=l;
    j=h;
    while(i<j)
    {
        //condition 1: find the first element greater than
        do {
            i++;
        }
        while(a[i]<=pivot);
        
        // condition 2: find the first element smaller than
        do {
            j--;
        }
        while(a[j]>pivot);
       
        if(i<j)
        {
            temp=a[i];         //swap(&arr[i], &arr[j]);
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[l];         // swap(&arr[low], &arr[j]);
    a[l]=a[j];    
    a[j]=temp;
    return (j);
}
