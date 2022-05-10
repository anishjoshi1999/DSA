#include <stdio.h>
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (element < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // sorted array is a must in binarySearch
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 99, 111, 222, 333, 444, 555};
    // to find the total length of an array
    int size = sizeof(arr) / sizeof(int);
    int element, searchIndex;
    printf("Enter an element that you want to find\n");
    scanf("%d", &element);
    searchIndex = binarySearch(arr, size, element);
    if(searchIndex != -1){
        printf("%d is at %d\n",element,searchIndex);
    }else{
        printf("%d is not in your array\n",element);
    }
    return 0;
}