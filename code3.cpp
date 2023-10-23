// Finding sum of all even integers upto n // 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 2;
    int sum = 0;
    
    while(i<=n){
        sum = sum + i;
        i = i + 2;
        
    }
    cout<<" the value of sum is "<<sum<<endl;

    return 0;
}