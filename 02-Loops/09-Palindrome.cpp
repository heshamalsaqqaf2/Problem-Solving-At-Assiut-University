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