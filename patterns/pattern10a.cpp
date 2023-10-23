#include<iostream>           // A
using namespace std;         // B B 
int main(){                  // C C C
    int n;
    cin>>n;

    int row = 1;

    while( row<=n){
        int col = 1;
        while(col<=row){
            char ch = 'A' + row - 1;
            cout<<ch;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}