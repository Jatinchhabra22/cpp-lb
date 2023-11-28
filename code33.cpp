// REVERSING AN ARRAY // 

#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v){

    int s =0; 
    int e = v.size() -1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;

    }
    return v;
}
int main() {

    vector<int> v;

    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(5);
    v.push_back(4);

    cout << "The array before reversing is " << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    cout << "The array after reversing is " << endl;
    vector<int> ans = reverse(v);

    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

