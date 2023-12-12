// how to get max/min from a list of numbers //  // nhi chl rha bhai // 
#include<iostream>
#include<limits>
using namespace std;

int getMin (int num[], int size){

    int min = INT_MAX;

    for(int i = 0; i<size; i++){
        if(num[i]<min){
           min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int size){

    int max = INT_MIN;

    for(int i= 0; i<size; i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}
int main(){
    int size;
    cout<<" enter the size of the array "<<endl;
    cin>>size;

    int num[100];
     
    for(int i = 0; i<size; i++){
        cin>>num[i];
    }
    cout<<" the maximum value in the array is "<<getMax(num,size)<<endl;
    
    cout<<" the minimum value in the array is "<<getMin(num,size)<<endl;
    
    return 0;
}