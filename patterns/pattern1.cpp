// STAR PATTERN // no. of rows = no of colums star ptrn
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;  // i is assigned for rows
    
    while(i<=n){
        
         int j = 1;
         while(j<=n){   // j is assigned for coloumns 
            cout<< "*";
            j = j + 1;

         }
         // jaise hi ek row print karvayi to uske baad next line pe jana hai
         cout<<endl;
         i = i +1;
    }

    return 0;
}