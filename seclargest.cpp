#include<iostream>
using namespace std;

int secondlargest(int a[], int n){

    int largest = a[0];
    int slargest = -1;

    for(int i = 1;i <n; i++){
        if(a[i] > largest ){
            slargest = largest;
            largest = a[i];

        }

        else if( a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
        
    }
    return slargest;
 }

 
 int secondSmallest(int a[], int n){
     int smallest = a[0];
     int ssmallest = INT_MAX;

     for(int i = 1; i<n; i++){
         if(a[i] < smallest){
             ssmallest =smallest;
             smallest = a[i];
        }
        else if( a[i] != smallest && a[i] < ssmallest){
            ssmallest = a[i];
        }
     }
     return ssmallest;
     

 }

int main(){
    
    int n;
    cin>>n;
    
    int arr[1000];
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        
    }
    

    cout<<" second largest element present in the array "<<secondlargest(arr,n)<<endl;
    cout<<" second smallest element present in the array "<<secondSmallest(arr,n)<<endl;

}
