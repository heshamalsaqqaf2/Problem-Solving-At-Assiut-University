/**
 * @version   0.1
 * @date      2024-08-20
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 01: Even,Odd,Positive And Negative.
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int testCases{};
    cout << "Enter Number Of Test Cases = ";
    cin >> testCases;

    int even{ 0 }, odd{ 0 }, positive{ 0 }, negative{ 0 };
    while (testCases > 0) {
        int number{};
        cin >> number;

        //? This Is Code Very Smart And Clean👌.
        even += number % 2 == 0;
        odd += number % 2 != 0;
        positive += number >= 0;
        negative += number < 0;

        //? Normal Thinkings ✋
        // if (number % 2 == 0)
        //     even++;
        // if (number % 2 != 0)
        //     odd++;
        // if (number >= 0)
        //     ++positive;
        // else
        //     ++negative;

        --testCases;
    }
    cout << "Even = " << even << "\n";
    cout << "ODD = " << odd << "\n";
    cout << "Positive = " << positive << "\n";
    cout << "Negative = " << negative << "\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n\n";
    return 0;
}