/**
 * @version   0.1
 * @date      2024-08-23
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 04: Difference.
 * @details
              //? Time limit: 1 second
              //? Memory limit: 256 megabytes
              Given four numbers A, B, C and D. Print the result of the following equation :
                    TODO: X = (A ∗ B) − (C ∗ D).
              Input : Only one line containing 4 separated numbers A, B, C and D (−105 ≤ A, B, C, D ≤ 105).
              Output : Print “Difference = 00 without quotes followed by the equation result.
              Example:
                - Standard input :
                    1 2 3 4
                    2 3 4 5
                    4 5 2 3
                - Standard output :
                    Difference = -10
                    Difference = -14
                    Difference = 14
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {

    int number_A{}, number_B{}, number_C{}, number_D{};

    cout << "Enter 4 Numbers A,B,C And D = ";
    cin >> number_A >> number_B >> number_C >> number_D;

    int equationResult = (number_A * number_B) - (number_C * number_D);
    cout << "Difference = " << equationResult << "\n";

    return 0;
}