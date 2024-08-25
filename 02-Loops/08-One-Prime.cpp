/**
 * @version   0.1
 * @date      2024-08-24
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 08: One Prime.
 * @details
              //? Time limit: 3 second
              //? Memory limit: 64 megabytes
              Given a number X. Determine if the number is prime or not.
              Input : Only one line containing a number X (2 ≤ X ≤ 105).
              Output : print “YES” if the number is prime and “NO” otherwise.
              Example:
                - standard input => standard output
                    7 => YES
                    15 => NO
              //! Note:
                A prime number is a number that is greater than 1 and has only two factors which are 1 and itself. In other words : prime number divisible only by 1 and itself.
                Be careful that 1 is not prime.
                The first few prime numbers are.
                First Example :
                    7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself,
                        so the answer is YES.
                Second Example :
                    15 not is prime because it is divisible by 3 ,5, so the answer is NO.
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    int number{};
    cout << "Enter Number = ";
    cin >> number;

    if (number <= 1)
        cout << "NO Is Not Prime Number\n";
    else
    {
        bool isPrime{ true };
        for (int i = 2; i < number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << "YES, Is Prime Number\n";
        else
            cout << "NO, Is Not Prime Number\n";
    }
    system("pause");
    return 0;
}