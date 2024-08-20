/**
 * @version   0.1
 * @date      2024-08-20
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 02: Even Numbers.
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number{};
    cout << "Enter Number = ";
    cin >> number;

    for (int i = 2; i <= number; i += 2) {
        if (i % 2 == 0)
            cout << i << "\n";
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n\n";
    return 0;
}