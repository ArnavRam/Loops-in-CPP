#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        cout << string((n - i) * 2, ' ');

        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }

        num -= 2;
        for (int j = 1; j < i; j++) {
            cout << num-- << " ";
        }

        cout << endl;
    }

    return 0;
}

// OUTPUT
// Enter number of rows: 5
//         1 
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
