// continue statements // 
#include<iostream>
using namespace std;

int main(){
    
    for( int i = 1; i<=5; i++){
        
        cout<<" hi "<<endl;
        cout<<" hey "<<endl;
        cout<<" hello ji "<<endl;

        continue;  // continue iske neeche vali statements ko aane hi nhi dega and hence loop 5 bari chalega
        
        cout<<" reply to karde "<<endl;
    
    }
    return 0;
}