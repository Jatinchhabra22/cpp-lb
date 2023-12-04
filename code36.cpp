#include<iostream>
using namespace std;

int main(){
    int sum1;
    int sum2 =0;

    int n;
    cin>>n;

    int arr[n];

     sum1 = n*(n+1)/2;

    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    for(int i = 0;i<n; i++){
        sum2 = sum2 + arr[i];
    }

    int result = sum1 -sum2;
    
    cout<<result;
    cout<<endl;
    return 0;
}