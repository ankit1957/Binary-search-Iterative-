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
int binarySearch(int arr[], int left, int right, int x) {
   if (right >= left) {
      int mid = left + (right - left) / 2;
      if (arr[mid] == x)
         return mid;
      if (arr[mid] > x)
         return binarySearch(arr, left, mid - 1, x);
      return binarySearch(arr, mid + 1, right, x);
   }
   return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;    
    int c, result;\
        while(c!=3){
        printf("Enter the element wanna search\n");
        scanf("%d", &key);
    
        printf("\n1. Iterative Search. \n2. Recursive Search.\n");
        printf("Enter your choice:\n");
        scanf("%d", &c);
        switch(c){
            case 1:
                result = BinarySearch(arr, 0, n-1, key);
                break;
            case 2:
                result = BinarySearch(arr, 0, n-1, key);
                break;
            default:
                printf("Invalid choice.\n");
                return 0;
        }
        if(result == -1)
            printf("Element not found.\n");
        else
            printf("Element founded at %d", result);
    }
    return 0;
}