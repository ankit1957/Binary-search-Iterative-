#include <stdio.h>

int binarySearchIterative(int arr[], int n, int x) {
   int left = 0, right = n - 1;
   while (left <= right) {
      int mid = left + (right - left) / 2;
      if (arr[mid] == x)
         return mid;
      if (arr[mid] < x)
         left = mid + 1;
      else
         right = mid - 1;
   }
   return -1;
}

int binarySearchRecursive(int arr[], int left, int right, int x) {
   if (right >= left) {
      int mid = left + (right - left) / 2;
      if (arr[mid] == x)
         return mid;
      if (arr[mid] > x)
         return binarySearchRecursive(arr, left, mid - 1, x);
      return binarySearchRecursive(arr, mid + 1, right, x);
   }
   return -1;
}

int main() {
   int arr[] = { 2, 3, 4, 10, 40 };
   int n = sizeof(arr) / sizeof(arr[0]);
   int x, choice, result;
   printf("Enter the value you want to search: ");
   scanf("%d", &x);
   printf("Enter 1 to perform binary search iteratively\n");
   printf("Enter 2 to perform binary search recursively\n");
   printf("Enter your choice: ");
   scanf("%d", &choice);
   switch (choice) {
      case 1:
         result = binarySearchIterative(arr, n, x);
         break;
      case 2:
         result = binarySearchRecursive(arr, 0, n - 1, x);
         break;
      default:
         printf("Invalid choice");
         return 0;
   }
   if (result == -1)
      printf("Element is not present in array");
   else
      printf("Element is present at index %d", result);
   return 0;
}
