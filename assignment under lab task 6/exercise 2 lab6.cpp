#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions from user
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Maximum rows allowed is 3. Exiting program." << endl;
        return 1;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Maximum columns allowed is 3. Exiting program." << endl;
        return 1;
    }

    // Dynamically allocate memory for the 2D array
    double** dynamicArray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new double[cols];
    }

    // Assign values to each element
    double value = 1.0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamicArray[i][j] = value++;
        }
    }

    // Output the values
    cout << "2D array values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    // Clean up memory
    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}