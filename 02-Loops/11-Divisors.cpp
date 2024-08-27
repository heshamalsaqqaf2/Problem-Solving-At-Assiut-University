/**
 * @version   0.1
 * @date      2024-08-24
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 09: Palindrome.
 * @details
              //? Time limit: 1 second
              //? Memory limit: 256 megabytes
              Given a number N. Print all the divisors of N in ascending order.
              Input : Only one line containing a number N (1 ≤ N ≤ 10).
              Output : Print all positive divisors of N, one number per line.
              Example:
                - standard input => standard output
                    6 => 1 2 3 6
                    7 => 1 7
                    4 => 1 2 4
              //! Note:
                Divisor of Number is A number that divides the integer exactly (no remainder).
                In other words the division works perfectly with no fractions or remainders involved.
                Examples:
                    - 3 is a divisor of 12, because 12 ÷ 3 = 4 exactly
                    - 4 is a divisor of 12, because 12 ÷ 4 = 3 exactly.
                    - 5 is not a divisor of 12, because 12 ÷ 5 = 2 with a remainder of 2.
                a divisor is also a factor of the original integer.
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int targetNumber{};
    cout << "Enter Numbers = ";
    cin >> targetNumber;

    if (targetNumber > 0) {
        cout << "All Divisors Of Target Number = ";
        for (int counterNumber = 1; counterNumber < targetNumber + 1; ++counterNumber) {
            if (targetNumber % counterNumber == 0)
                cout << counterNumber << " ";
        }
    }
    else cout << "Sorry, Enter Number Greater Or Equal 1";

    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}