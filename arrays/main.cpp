#include <iostream>
using namespace std;

int main() {
    // Single-dimensional array
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Single-dimensional array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    // Multi-dimensional array (2x3)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "\nMulti-dimensional array (2x3):" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Accessing elements directly
    cout << "\nAccessing specific elements:" << endl;
    cout << "numbers[2] = " << numbers[2] << endl; // 3rd element
    cout << "matrix[1][2] = " << matrix[1][2] << endl; // 2nd row, 3rd column

    return 0;
}