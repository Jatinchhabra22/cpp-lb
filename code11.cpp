// FUNCITONS INTRO // 
#include<iostream>
using namespace std;

int main(){  // agar hamein do baar power niklani hai to itna bada thodi likhege
             // so we use FUNCTIONS (see in code 12.cpp)
    int a, b;
    cin >> a >> b;

    int ans = 1;
    
    for( int  i = 1; i<=b; i++){
        ans = ans * a;
    }
    cout<<" the answer is " << ans <<endl;

    int c, d;
    cin >> c >> d;

   ans = 1;
    
    for( int  i = 1; i<=d; i++){
        ans = ans * c;
    }
    cout<<" the answer is " << ans <<endl;
    return 0;
}