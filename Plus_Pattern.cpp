#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number for the size of the plus pattern: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number for symmetry." << endl;
        return 1;
    }

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid || j == mid)
                cout << "+ ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
// Enter an odd number for the size of the plus pattern: 5
//     +     
//     +     
// + + + + + 
//     +     
//     +     
