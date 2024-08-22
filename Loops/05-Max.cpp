/**
 * @version   0.1
 * @date      2024-08-22
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 05: Max.
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";


    int testCase{};
    cout << "Enter Number = ";
    cin >> testCase;

    int isMax = { -1 };
    while (testCase > 0) {

        int number{};
        cin >> number;

        if (number > isMax)
            isMax = number;
        --testCase;
    }
    cout << "Is Max Number = " << isMax << "\n";


    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n\n";
    return 0;
}