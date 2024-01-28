#include<iostream>
using namespace std;

void printsum(int arr[][3], int rows, int cols){

    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum = sum + arr[i][j];
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[3][3];

    cout << "Enter elements of the 3x3 array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "The 2D array is:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing the sum of each row:" << endl;
    printsum(arr, 3, 3);

    return 0;
}
