#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    // baki sab same as usual // 

    // last in , first out // 



    return 0;
}