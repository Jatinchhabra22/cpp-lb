#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;

    s.push("love");
    s.push("babar");
    s.push("kumar");



    cout<<" the top element is " <<s.top()<<endl;
    



    return 0;
}