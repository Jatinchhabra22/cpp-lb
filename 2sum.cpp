#include<iostream>
using namespace std;

int main() {

     int t;  // no. of test cases 
    cin>>t;
    

    int n;     // size of arrays 
    cin >> n;
    
   

    int target;  // sum or target you want to achieve 
    cin >> target;

    int arr[n];

    while(t--){

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    }
    return 0;
}
