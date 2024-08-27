/**
 * @version   0.1
 * @date      2024-08-27
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 10: Primes From 1 To N.
 * @details
              //? Time limit: 3 second
              //? Memory limit: 256 megabytes
              Given a number N . Print all prime numbers between 1 and N inclusive.
              Input : Only one line containing a number N (2 ≤ N ≤ 10 ).
              Output : Print all prime numbers between 1 and N (inclusive) separated by a space.
              Example:
                - standard input => standard output
                    10 => 2 3 5 7
              //! Note:
                - A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.
                - In other words : prime number divisible only by 1 and itself.
                - Be careful that 1 is not prime.
                - The first few prime numbers are 2 3 5 7 11 19 23 29 31 43.....
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

    if (targetNumber > 1) {
        bool isPrime{ true };
        cout << "All Prime Target Number = ";

        for (int number = 2; number < targetNumber; ++number) {
            for (int primeNumbers = 2; primeNumbers < number; ++primeNumbers) {
                if (number % primeNumbers == 0) {
                    isPrime = false;
                    break;
                }
                else isPrime = true;
            }
            if (isPrime)
                cout << number << " ";
        }
    }
    else cout << "Sorry, Enter Number Greater Or Equal 2.\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}