// 2D ARRAYS //

#include<iostream>
using namespace std;

int main(){
    
    // creating a 2D array 

    int arr[3][4];

    // taking input row wise

   // for(int i = 0; i<3; i++){
   //     for(int j = 0; j<4; j++){
   //         cin >> arr[i][j];
   //     }
   // }

    // taking input column wise 
    for(int i = 0; i<4; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[j][i];
        }
    }

    // printing array 
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }


    return 0;
}