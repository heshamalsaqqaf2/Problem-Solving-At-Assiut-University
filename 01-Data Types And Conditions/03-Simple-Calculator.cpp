/**
 * @version   0.1
 * @date      2024-08-23
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 03: Simple Calculator.
 * @details
              //? Time limit: 1 second
              //? Memory limit: 256 megabytes
              Given two numbers X and Y . Print the summation and multiplication and subtraction of these 2 numbers.
              Input : Only one line containing two separated numbers X, Y (1 ≤ X, Y ≤ 105).
              Output : Print 3 lines that contain the following in the same order:
                1. “X + Y = summation result” without quotes.
                2. “X * Y = multiplication result” without quotes.
                3. “X - Y = subtraction result” without quotes.
              Example:
                - Standard input : 5 10
                - Standard output :
                    5 + 10 = 15
                    5 * 10 = 50
                    5 - 10 = -5
              //! Note: Be careful with spaces.
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {

  int number_X{};
  int number_Y{};

  cout << "Enter 2 Numbers X And Y = ";
  cin >> number_X >> number_Y;

  cout << number_X << " + " << number_Y << " = " << number_X + number_Y << "\n";
  cout << number_X << " * " << number_Y << " = " << number_X * number_Y << "\n";
  cout << number_X << " - " << number_Y << " = " << number_X - number_Y << "\n";

  return 0;
}