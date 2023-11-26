#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    vector<int> a(5,1); // 5 is size and initialise all elements by 1

    cout<<"printing a "<<endl;
    for(int i:a){
        cout<<i<<" "; // all elements are 1 
    }
    cout<<endl;


    cout<<"capacity --> "<<v.capacity()<<endl; // capacity is memory allocated

    v.push_back(1);
    cout<<"capacity --> "<<v.capacity()<<endl;

     v.push_back(2);
    cout<<"capacity --> "<<v.capacity()<<endl;

     v.push_back(3);
    cout<<"capacity --> "<<v.capacity()<<endl;
    // capacity directly goes to 4 as soon as we add 3 elements to the vector

    cout<<"size of vector --> " <<v.size()<<endl;

    cout<<"element at the first index is "<<v.at(0)<<endl;

    cout<<"front --> "<<v.front()<<endl;
    cout<<"back --> "<<v.back()<<endl;

    // pop out function //

    v.pop_back();

    cout<<"the elements of the vector "<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}