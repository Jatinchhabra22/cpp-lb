#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "enter the size of array " << endl;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array
    sort(arr, arr + n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
