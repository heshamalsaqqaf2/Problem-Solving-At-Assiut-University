/**
 * @version   0.1
 * @date      2024-08-24
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 04: Fixed Password.
 * @details
              //? Time limit: 1 second
              //? Memory limit: 256 megabytes
              Given multiple lines each line contains a number X which is a password. Print “Wrong” if the password
              is incorrect otherwise, print “Correct” and terminate the program.
              Note: The “Correct” password is the number 1999.
              Input : The input contains several passwords.
                        Each line contains a number X (103 ≤ X ≤ 104 − 1).
              Output : Print “Wrong” if the password is typed wrong otherwise,
                        print “Correct” if the password is typed correctly.
              Example:
                - standard input
                    2200
                    1020
                    1999
                - standard output
                    Wrong
                    Wrong
                    Correct
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    int passwordNumber{};
    int currentPassword{ 1999 };

    cout << "Enter Password Number = ";
    while (true) {
        cin >> passwordNumber;
        if (passwordNumber == currentPassword) {
            cout << "\nYes, Password Is CORRECT ✅" << endl;
            break;
        }
        else
            cout << "No, Password Is " << "\"WRONG\"" << " ❌ Agin Enter Password : ";
    }
    return 0;
}