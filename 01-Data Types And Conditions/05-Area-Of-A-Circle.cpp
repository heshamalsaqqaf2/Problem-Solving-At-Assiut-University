/**
 * @version   0.1
 * @date      2024-08-23
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 05: Area Of A Circle.
 * @details
              //? Time limit: 1 second
              //? Memory limit: 256 megabytes
              Given a number R calculate the area of a circle using the following formula:
                TODO: Area = π * R^2.
                TODO: Note: consider π = 3.141592653.
              Input : Only one line containing the number R (1  ≤  R  ≤  100).
              Output : Print the calculated area, with 9 digits after the decimal point.
              Example:
                - Standard input : 2.00
                - Standard output : 12.566370612
              //! Note:
                - Use the data type double for this problem.
                - Use setprecision (9) to print 9 digits after decimal point.
                - you can use function setprecision that are in #include<iomanip> library for Example :
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Function setprecision() That Are In #include<iomanip> Library.
  cout << fixed << setprecision(9);

  double number_R{};
  cout << "Enter The Number = ";
  cin >> number_R;

  const double py{ 3.141592653 };
  double area = py * number_R * number_R; // Area = π * R^2 ===> R * R = R^2.
  cout << "Calculate Area Of A Circle = " << area << "\n";

  return 0;
}