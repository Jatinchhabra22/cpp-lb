// PATTERN 3 // 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i = 1;
    
    while(i<=n){
        int j = 1;
        
        while(j<=n){
        cout<<j;
        j= j+1;            //  123
        }                   // 123
        cout<<endl;        //   123
        i = i+1;
    }
    return 0;
}