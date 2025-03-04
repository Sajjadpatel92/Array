#include<iostream>
using namespace std;
int main(){
    int row_col;
    cout<<"Enter the array's row and column size: ";
    cin>>row_col;

    int a[row_col][row_col];
    int i , j ;

    cout<<"Enter array's elements:"<<endl;
    for(i = 0 ; i < row_col ; i++){
        for(j = 0 ; j < row_col ; j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
    cout<<"The transpose matrix of an array :"<<endl;

    for(i = 0 ; i < row_col ; i++){
        for(j = 0 ; j < row_col ; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

}