// printin counitng // 
#include<iostream>
using namespace std;

void printCounting(int n){ // void mane ye just ek fn hai and isse koi o/p expect mat karo
    
    for( int i = 1; i<=n; i++){
        cout<<i<<endl;
    }
}
int main(){

    int n;
    cin>>n;

    printCounting(n);
    
    return 0;
}