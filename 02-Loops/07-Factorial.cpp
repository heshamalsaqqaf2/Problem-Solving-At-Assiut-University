/**
 * @version   0.1
 * @date      2024-08-24
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 07: Factorial.
 * @details
              //? Time limit: 2 second
              //? Memory limit: 64 megabytes
              Given a number N. Print the factorial of number N.
              Input : First line contains a number T (1 ≤ T ≤ 15) number of test cases.
                        Next T lines will contain a number N (0 ≤ N ≤ 20).
              Output : For each test case print a single line contains the factorial of N.
              Example:
                - standard input
                    2
                    5
                    3
                - standard output
                    120
                    6
              //! Note:
                - Factorial, in mathematics, the product of all positive integers less than or equal to
                    a given positive integer and denoted by that integer and an exclamation point.
                - Thus, factorial seven is written 7!, meaning 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040 .
                - Factorial zero is defined as equal to 1.
                - In first test case for N = 5 , 5! = 1 * 2 * 3 * 4 * 5 = 120 so the answer is 120.
                - In Second test case for N = 3 , 3! = 1 * 2 * 3 = 6 so the answer is 6.
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    int testCase{}, number{};
    cout << "Enter Test Case Number = ";
    cin >> testCase;

    if (1 <= testCase && testCase <= 15) {
        while (testCase > 0)
        {
            cin >> number;
            if (1 <= number && number <= 20) {
                int result{ 0 };
                int factorial{ 1 };
                for (int i = 2; i < number + 1; ++i)
                    factorial *= i;
                result += factorial;
                cout << "Factorial " << "!" << number << " = " << result << endl;
            }
            else
                cout << "Sorry!, Number Of Rang From 1 To 20 \n";

            --testCase;
        }
    }
    else
        cout << "Sorry!, Test Case Number Of Rang From 1 To 15 \n";

    return 0;
}