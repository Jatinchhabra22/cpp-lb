#include<iostream>
using namespace std;

int main() {

     int t;
    cin>>t;
    

    int n;
    cin >> n;
    
   

    int target;
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
