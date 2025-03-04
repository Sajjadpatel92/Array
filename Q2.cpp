#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the array's row size: ";
    cin>>row;
    cout<<"Enter the array's column size: ";
    cin>>col;

    int a[row][col];
    int i , j ;

    cout<<"Enter array's elements:" <<endl;
    for(i = 0 ; i < row ; i++){
        for(j = 0 ; j < col ; j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
    int largest = 0 ;
    for(i = 0 ; i < row ; i++){
        for(j = 0 ; j < col; j++){
            if(a[i][j] > largest){
                largest = a[i][j];
            }
        }
    }
    cout<<"The largest element is : "<<largest;
}

