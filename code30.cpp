#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "the array before sorting is ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    cout << "the array after sorting is ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
