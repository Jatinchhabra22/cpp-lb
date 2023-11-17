// finding given number is prime or not // 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

     int i = 2;

 while(i<n){
        if(n%i == 0){
            cout<<" not prime " <<endl;
            break;
        }
        else{
            cout<<" prime number " <<endl;
        break;
 
        }
        i = i+1;
     }
    return 0;
}