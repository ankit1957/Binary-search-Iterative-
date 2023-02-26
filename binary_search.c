#include<stdio.h>
int BinarySearch(int arr[], int low, int high, int key){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid]>key)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the element wanna search\n");
    scanf("%d", &key);
    int result = BinarySearch(arr, 0, n-1, key);
    if(result == -1)
        printf("Element not found.\n");
    else
        printf("Element founded at %d", result);
    return 0;
}