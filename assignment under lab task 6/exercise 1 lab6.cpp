#include <iostream>
#include <cstring> // For string functions
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // Dynamically allocate a string
    char* dynamicString = nullptr;
    cout << "Enter a string: ";
    dynamicString = getln(); // Custom function to read input

    // Output the values
    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;
    cout << "Dynamically allocated string: " << dynamicString << endl;

    // Clean up memory
    delete dynamicInt;
    delete[] dynamicString;

    return 0;
}