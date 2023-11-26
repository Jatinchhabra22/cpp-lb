#include<iostream>
#include<queue>
using namespace std;
 
// first in first out // 

int main(){

    queue<string> q;

    q.push("love");
    q.push("kumar ");
    q.push("babbar");
    
    cout<<q.front()<<endl;

    cout<<"size before pop "<<q.size()<<endl;
    q.pop();
    cout<<"size after pop "<<q.size();


    return 0;
}