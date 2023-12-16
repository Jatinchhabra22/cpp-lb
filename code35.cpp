// MOVE ZEROES IN AN ARRAY // 
#include<iostream>
#include<vector>


using namespace std;

int main(){


vector<int> v;

v.push_back(2);
v.push_back(4);
v.push_back(0);
v.push_back(0);
v.push_back(8);
v.push_back(7);
v.push_back(0);
v.push_back(4);
v.push_back(0);
cout<<" the array before sorting all the 0's are "<<endl;
for(int i :v){
    cout<<i<<" ";   
}
cout<<endl;

int i = 0;

for(int j =0; j<v.size(); j++){

    if(v[j] != 0){
        swap(v[j], v[i]);
        i++;
    }
}
cout<<"the array now is"<<endl;
for(int i:v){
    cout<<i<<" ";
}

    return 0;
}