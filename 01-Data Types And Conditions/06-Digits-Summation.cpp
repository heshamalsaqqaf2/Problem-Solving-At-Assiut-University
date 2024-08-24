/**
 * @version   0.1
 * @date      2024-08-23
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 06: Digits Summation.
 * @details
              //? Time limit: 0.25 second
              //? Memory limit: 64 megabytes
              Given two numbers N and M. Print the summation of their last digits.
              Input : Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).
              Output : Print the answer of the problem.
              Example:
                - Standard input : 13 12
                - Standard output : 5
              //! Note:
                First Example : last digit in the first number is 3 and last digit in the second number is 2.
                So the answer is: (3 + 2 = 5)
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {

  int number_N{}, number_M{};
  cout << "Enter The 2 Number N And M = ";
  cin >> number_N >> number_M;

  // The Models [ % 10 ] => Get Last Digit Of Numbers.
  int summation = (number_N % 10) + (number_M % 10);
  cout << "Summation = " << summation << "\n";

  return 0;
}