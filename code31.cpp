// BUBBLE SORTING // 

#include<iostream>
using namespace std;

int main(){
    
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

     for(int i =1; i<n; i++){
        // for no. of rounds
        bool swapped = false;
        for(int j = 0; j<n-i; j++){ // jaise jaise loop aage bhad rha hai vaise vaise ek element gets sorted
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){ // already sorted
            break;
        }
    
    
    }

    cout << "the array after sorting is ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}