#include <iostream>
#include <limits>
using namespace std;

int main() {
    int value = 0;

    while (value < 5 || value > 10) {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> value;

        // Check if the input is a valid integer
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            value = 0;
        }

        // Check if the input is between 5 and 10
        if (value < 5 || value > 10) {
            cout << "sorry, you entered an Invalid input. Please try again." << endl;
        }
    }

    cout << "Your input value (" << value << ") has been accepted." << std::endl;

    return 0;
}