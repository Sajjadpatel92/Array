#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the array's size: ";
    cin>>size;
    int a[size];
    cout<<"Enter array's elements: "<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }cout<<"Negative elementsfrom an array: ";
    for(int i = 0 ; i < size ; i++){
        if(a[i] < 0){
            cout<<a[i]<<" ,";
        }
    }
}