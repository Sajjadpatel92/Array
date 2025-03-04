
#include <iostream>
using namespace std;

int main() {
    int row_size, col_size;

    cout << "Enter array's row size: ";
    cin >> row_size;
    cout << "Enter array's column size: ";
    cin >> col_size;

    int arr[row_size][col_size];

    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            cout << "a [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row_size; i++) {
        int row_sum = 0;
        cout << "Element of row " << i << ": ";
        for (int j = 0; j < col_size; j++) {
            cout << arr[i][j] << " ";
            row_sum += arr[i][j];
        }
        cout << "The sum of row " << i << ": " << row_sum << endl;
    }

    for (int j = 0; j < col_size; j++) {
        int col_sum = 0;
        cout << "Element of column " << j << ": ";
        for (int i = 0; i < row_size; i++) {
            cout << arr[i][j] << " ";
            col_sum += arr[i][j];
        }
        cout << "The sum of column " << j << ": " << col_sum << endl;
    }
}
