/**
 * @version   0.1
 * @date      2024-08-24
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 09: Palindrome.
 * @details
              //? Time limit: 3 second
              //? Memory limit: 64 megabytes
              Given a number N . Print 2 lines that contain the following respectively:
                1.  Print N in a reversed order and not leading zeroes.
                2.  If N is a palindrome number print “ YES” otherwise, print “ NO.
              Input : Only one line containing a number N (1 ≤ N ≤ 10 ).
              Output : Print the answer required above.
              Example:
                - standard input => standard output
                    121 => 121 YES
                    160 => 61 NO
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
    int numbers{};
    cout << "Enter Numbers = ";
    cin >> numbers;

    int originalNumber = numbers;

    int reversedNumber{ 0 };
    while (numbers > 0) {
        int digit = numbers % 10;
        reversedNumber = reversedNumber * 10 + digit;
        numbers /= 10;
    }

    cout << reversedNumber << " ";
    if (originalNumber == reversedNumber)
        cout << "YES, Is Palindrome.\n";
    else
        cout << "NO, Is Not Palindrome.\n";

    system("pause");
    return 0;
}