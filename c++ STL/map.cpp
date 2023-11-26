#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<int, string> m;

    m[1] = " love";
    m[2] = " babbar";
    m[13] = "kumar ";

    // Insert using make_pair
    m.insert(make_pair(5, "bheem"));

    cout << "before erasing " << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    m.erase(13);
    cout<<"after erasing "<<endl;
    
    return 0;
}
