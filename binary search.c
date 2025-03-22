#include<stdio.h>
int binarysearch(int arr[],int left,int right,int target)
{
    while(left <= right)
    {
        int mid = left + (right-left)/2;

        if (arr[mid] == target)
            return mid;
        if (arr[mid]< target)
            left = mid + 1;
        else
            right = mid-1;
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d sorted elements :",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int size =n;
    int target;
    printf("Enter the Number to search : ");
    scanf("%d",&target);
    int result = binarysearch(arr,0,size-1,target);
    if (result!=-1)
        printf("Element found at index %d\n",result);
    else
        printf("Element not found in the array \n");
    return 0;
}
