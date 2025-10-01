#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
// Enter number of rows: 5
// A 
// B C
// D E F
// G H I J
// K L M N O
