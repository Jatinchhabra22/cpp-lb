#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i = 1;

    // print karo space(1st triangle)
    while(i<=n){
        int space = n - i;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        // print karo 2nd triangle
        int j  = 1;
        while(j<=i){
            cout<<j;
            j = j +1;
        }
        // print karo 3rd triangle 
        int start = i - 1;
        while(start){
            cout<<start;
            start = start -1;
        }
        cout<<endl;
        i = i + 1;
    }

}