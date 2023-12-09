// palindrome , reversing , length in an string // 

#include<iostream>
using namespace std;

int tolowerCase(char ch){
    if(ch >= 'a' && ch<= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(tolowerCase(a[s])  != tolowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1; // means bhai a is palindrome 
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != 0; i++){
        count++;
    }
return count;
}

int main(){

   char name[20];

    cout<<"enter your name : "<<endl;

    cin>>name;

    cout<<"Enter your name "<<name<<endl;
    cout<<"The length in your name is " <<getLength(name)<<endl;

    int len = getLength(name);
    reverse(name,len);
    cout<<"The name after reversing is "<<name<<endl;


    cout<<" are you palindrome ?? : "<<checkPalindrome(name , len)<<endl;
    return 0;
}