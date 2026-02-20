#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int target) {
   int low = 0;
   int high = size - 1;

   while ( low <= high) {
      int mid = (low + high) / 2;
      
      if (array[mid] == target) {
        return mid;
      } else if ( array[mid] > target) {
         high = mid - 1;
      } else {
         low = mid + 1;
      }

   }

   return -1; // element not found.
}

int main() {
    int arr[10] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int length = sizeof(arr) / sizeof(int);

    int position = binarySearch(arr, length, 23);
    
    cout << position << endl;


    return 0;
}