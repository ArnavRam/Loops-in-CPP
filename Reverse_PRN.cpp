#include <iostream>
using namespace std;

int main() {
    int PRN, num, reversed = 0, digit_count = 0;

    cout << "Enter PRN: " << endl;
    cin >> PRN;

    int original_PRN = PRN;

    while (PRN > 0) {
        num = PRN % 10;
        reversed = reversed * 10 + num;
        PRN = PRN / 10;
        digit_count++;
    }

    cout << "Original PRN: " << original_PRN << endl;
    cout << "Reversed PRN: " << reversed << endl;
    cout << "Number of digits: " << digit_count << endl;

    if (original_PRN == reversed) {
        cout << "The PRN is a Palindrome." << endl;
    } else {
        cout << "The PRN is not a Palindrome." << endl;
    }

    return 0;
}

// OUTPUT
// Enter PRN: 
// 123005
// Original PRN: 123503
// Reversed PRN: 305321
// Number of digits: 6
// The PRN is not a Palindrome.
// Enter PRN: 
// 12321
// Original PRN: 12321
// Reversed PRN: 12321
// Number of digits: 5
// The PRN is a Palindrome.
