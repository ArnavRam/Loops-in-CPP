#include <iostream>
#include <conio.h>  
using namespace std;

int main() {
    string password = "BCD9QTTU";
    string user_password;
    int attempts = 0;
    const int max_attempts = 3;

    while (attempts < max_attempts) {
        user_password = "";

        cout << "Enter the Password: ";
        char ch;
        while ((ch = _getch()) != '\r') {  
            if (ch == '\b') {  
                if (!user_password.empty()) {
                    user_password.pop_back();
                    cout << "\b \b";
                }
            } else {
                user_password += ch;
                cout << '*';  
            }
        }
        cout << endl;

        if (user_password == password) {
            cout << "System is Unlocked" << endl;
            return 0;
        } else {
            attempts++;
            cout << "Incorrect Password. Attempts left: " << max_attempts - attempts << endl;
        }
    }

    cout << "Too many failed attempts. System is locked." << endl;
    return 0;
}

// OUTPUT
// Enter the Password: ********
// Incorrect Password. Attempts left: 2
// Enter the Password: ********
// System is Unlocked
