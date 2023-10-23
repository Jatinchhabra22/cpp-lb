#include<iostream>
using namespace std;    

int main(){
    int n;
    cin>>n;

    int i =1;

    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<i;
            j = j+1;
    
        }
        cout<<endl;    // 111
        i = i+1;       // 222
    }                  // 333
    return 0;
}