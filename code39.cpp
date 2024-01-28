// finding largest row sum // 

#include<iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){
    
    int maxi = INT_MIN;
    int rowIndex =  -1;

    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
        cout<<"the maximum sum is " <<maxi <<endl;
        return rowIndex;
}


int main(){


    int arr[3][3];
    

    cout<<"enter the elements "<<endl;
    for(int row = 0; row<3; row++){
        for(int col=0; col<3; col++){
            cin >>arr[row][col];
        }
    }

    cout<<"priting the array "<<endl;

    for(int row = 0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }

    int ansIndex = largestRowSum(arr,3,3);
    cout<<"max row is at index "<<ansIndex<<endl;
    return 0;
}