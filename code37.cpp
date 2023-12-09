// strings //
// strings are 1D charachter array //

#include<iostream>
using namespace std;

int main(){
    
    char name[20];

    cout<<"enter your name : "<<endl;

    cin>>name;

    name[2] = '\0'; // \0 is null charachter jaise hi ye ata hai array mai vaise hi 
                    // execution stops 

    cout<<"your name is : "<<name<<endl; 
    // mera name is jatin chhabra but cout will give me only jatin as
    // jaise hi cin mai we give (space , tab , enter ) it stops the execution 

    return 0;
}