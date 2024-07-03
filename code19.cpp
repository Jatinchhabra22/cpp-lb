// functions with array // function basically just optimises the code(sundarta badata hai)
#include<iostream>
using namespace std;

int printArray(int arr[], int size){

    cout<<" printing the array "<<" ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"done with the array "<<endl;

}
int main(){
    int third[4] = {2,3,4,5};
    printArray(third,4);
    cout<<endl;
    int fourth[10] = {1,1};
    printArray(fourth,20);


    return 0;
}