#include<iostream>
#include<set>
using namespace std;

// set always stores unique element and returns the value in ordered set //
int main(){
    
    set<int> s;

    s.insert(3);
    s.insert(3);
    s.insert(6);
    s.insert(6);
    s.insert(4);
    s.insert(5);
    s.insert(7);
    s.insert(5);
    s.insert(4);

    for(auto i:s){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"5 is present or not ?? --> "<<s.count(5)<<endl;
   
   set<int>::iterator it = s.begin();
   it++;

   s.erase(it);

    for(auto i:s){
        cout<<i<<endl;

    }
    return 0;
}