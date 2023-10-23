// finding given number is prime or not // 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

     int i = 2;

 while(i<n){
        if(i%n==0){
            cout<<" not prime for "<< i <<endl;
        }
        else{
            cout<<" prime number for "<< i <<endl;
 
        }
        i = i+1;
     }
    return 0;
}