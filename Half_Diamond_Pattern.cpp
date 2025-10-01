#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the half-diamond pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
// Enter the number of rows for the half-diamond pattern: 5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
