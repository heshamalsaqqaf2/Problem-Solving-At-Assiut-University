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
                    121 => 121 YES
                    160 => 61 NO
              //! Note:
                A palindrome number is a number that reads the same forward or backward.
                For example: 12321, 101 are palindrome numbers, while 1201, 221 are not.
                A leading zero is any 0 digit that comes before the first nonzero digit in a number for
                    example : numbers (005 , 01 , 0123 , 02 , 000250 ) are leading zeroes but
                    ( 5 , 123 , 20 ,2500 ) not leading zeroes numbers .
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