// finiding peak in an mountain array // 
#include<iostream>
using namespace std;

int getPeak(int arr[], int n ){
     
     int s = 0;
     int e = n-1;
     int mid = s + (e-s)/2;
     int ans = -1;
     
     while(s<e){

        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;    
 }
 return s;


}

int main(){
    
    int arr[6] = {1,4,6,7,8,4};

    cout<<" the peak in the array even is at index  " <<getPeak(arr, 6);
    return 0;
}