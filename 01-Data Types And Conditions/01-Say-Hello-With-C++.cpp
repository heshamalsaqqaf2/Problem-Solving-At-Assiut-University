/**
 * @version   0.1
 * @date      2024-08-23
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 01: Say Hello With C++.
 * @details
              //? Time limit: 1 second
              //? Memory limit: 256 megabytes
              Given a name S. Print “Hello, (name)” without parentheses.
              Input : Only one line containing a string S.
              Output : Print “Hello, ” without quotes, then print name.
              Example
                - Standard input : programmer
                - Standard output : Hello, programmer
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
  string name{ };

  cout << "Enter String Name : ";
  cin >> name;

  cout << "Hello, " << name << "\n";
  return 0;
}