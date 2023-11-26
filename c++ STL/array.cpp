#include<iostream>
#include<array>

using namespace std;

int main(){

    array<int,4> a = {1,2,3,4,};
     int size = a.size();

    cout<<"the elements of the array are "<<endl;
    for(int i = 0; i<size; i++){
        cout<<a[i]<<endl;
    }
    cout<<"the size of the array is : ";
    cout<<size<<endl;

    cout<<"the element at the 2nd index --->> is "<<a.at(2)<<endl;
    cout<<"the element at the 3nd index --->> is "<<a.at(3)<<endl;

    cout<<a.empty()<<endl; // returns true or false // 

    cout<<"first element --> "<<a.front()<<endl; 
    cout<<"last element --> "<<a.back()<<endl;


}