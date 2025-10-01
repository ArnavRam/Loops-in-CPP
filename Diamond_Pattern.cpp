#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number of rows for the diamond pattern: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number for a symmetric diamond." << endl;
        return 1;
    }

    int mid = (n + 1) / 2;

    for (int i = 1; i <= mid; i++) {
        cout << string(mid - i, ' ');
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = mid - 1; i >= 1; i--) {
        cout << string(mid - i, ' ');
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
// Enter an odd number of rows for the diamond pattern: 5
//   * 
//  * * 
// * * * 
//  * * 
//   * 
