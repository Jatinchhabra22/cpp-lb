#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1); // goes at last 
    d.push_front(2); // comes at front 

    cout<<"deque is "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin() + 1);
    cout<<" after erase "<<d.size()<<endl;
    


}
