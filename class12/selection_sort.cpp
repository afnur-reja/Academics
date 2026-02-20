#include <iostream>
using namespace std;

// process : (n-1) times iteration --> pushing (n-1) smallest element start of the array.  
// in this algorithm we assume two parts of array sorted and unsorted. we loop through unsorted part and find the smallest element and than place it at the start of the unsorted part.

void selectionSort(int arr[], int n) {
   for(int i = 0; i < n-1; i++) {
      int smallestIdx = i; // start of unsorted part.
      for (int j = i+1; j < n; j++) {
          if (arr[j] < arr[smallestIdx]){
             smallestIdx = j;
          }
      }

      swap(arr[i], arr[smallestIdx]);


   }
}

int main() {

    int arr[6] = {4, 1, 5, 2, 3, 8};
    int size = sizeof(arr) / sizeof(int);
    selectionSort(arr, size);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}