#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    
    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    cout<<"finding 6 ->> "<<binary_search(v.begin(), v.end(), 6)<<endl;
    cout<<"finding 100 ->> "<<binary_search(v.begin(), v.end(), 100)<<endl;

    cout<<"lower bound --> "<<lower_bound(v.begin(), v.end(), 6) - v.begin()<<endl;
    cout<<"upper bound --> "<<upper_bound(v.begin(), v.end(), 6) - v.begin()<<endl;

    int a = 4;
    int b =5;

    cout<<"max and min are "<<max(a,b)<<" and "<<min(a,b)<<endl;

    string s = "abcd";

    reverse(s.begin(), s.end());
        cout<<"string reversed is "<<s<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
        cout<<"after rotate"<<endl;
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
        
    
    sort(v.begin(), v.end());
    for( int i:v){
        cout<<i<<" ";
    }
    
    return 0;
}