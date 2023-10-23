#include<iostream>
using namespace std;
 
int power(int a, int b){ //power is a fn

    int ans = 1;
    
    for( int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans;

}

int main(){

    int a, b;
    cin>> a >> b;

    int answer = power(a,b);
    cout<<" answer is "<< answer <<endl;

    int c,d;
    cin>> c >> d;
    int ans2 = power(c,d);
    cout<< " answer is "<<ans2<<endl;
    
    return 0;
}