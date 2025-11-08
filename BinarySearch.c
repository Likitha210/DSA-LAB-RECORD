#include<stdio.h>
//Iterative binary search function
int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;     //find middle index
        if(arr[mid]==key)
            return mid;   //element found
        else if (arr[mid]<key)
            low=mid+1;   //search right half
        else
            high=mid-1;   //search left half
    }
    return-1;    //element not found
}
int main()
{

    int n,key;
    //input array size
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    //input sorted elements
    printf("Enter %d sorted elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //input element to search
    printf("Enter element to search:");
    scanf("%d",&key);
    //perform binary search
    int result=binarySearch(arr,n,key);
    //print result
    if(result !=-1)
        printf("Element %d found at index %d.\n",key,result);
    else
        printf("Element %d not found.\n",key);
    return 0;
}
