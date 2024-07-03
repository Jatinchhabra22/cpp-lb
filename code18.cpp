#include<iostream>
using namespace std;

int main(){
    int n = 15;

    int third[15] = {2,7}; // pehle do to hamne bata diye baki mai koi bhi garbage value aaygi
    
    // printing the array
    
    for(int i = 0; i<n; i++){
    
        cout<< third[i]<<" ";
    }
    return 0;
}