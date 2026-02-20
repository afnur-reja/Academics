#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i, pos;

    cout << "Enter number of elements : ";
    cin >> n;

    cout << "Enter elements : \n";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter position to delete : ";
    cin >> pos;

    //Shift elements left 
    for(i = pos - 1; i < n; i++){
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion : \n";
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}