#include<stdio.h>
//Function to perform linear searchint
int linearsearch(int arr[],int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;  //return index if found
        }
    }
    return -1;    //return -1 if not found
}
int main()
         {
          int n,key,position;
          //input array size
          printf("Enter number of elements:");
          scanf("%d",&n);
          int arr[n];    //array declaration
          //input array elements
          printf("Enter %D element:",n);
          for(int i=0;i<n;i++)
          {
              scanf("%d",&arr[i]);
          }
          //input the element to search
          printf("Enter the number to search:");
          scanf("%d",&key);
          //perform linear search
          position=linearsearch(arr,n,key);
          //output result
          if(position==-1)
          {
              printf("Enter %d not found in the array.\n",key);
          }
          else
          {
              printf("Element %d found at position %d(index %d".\n,key,position+1,position);
          }
          return 0;
         }
