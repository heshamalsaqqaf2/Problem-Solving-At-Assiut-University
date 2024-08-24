/**
 * @version   0.1
 * @date      2024-08-23
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Problem 02: Basic Data Types.
 * @details
              //? Time limit: 1 second
              //? Memory limit: 256 megabytes
              The following lines show some C++ data types, their format specifiers and their most common bit widths:
                 int : 32 Bit integer.
                 long long : 64 bit integer
                 Char : 8 bit Characters & symbols
                 Float : 32 bit real value
                 Double : 64 bit real value
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    int integer{};
    long long longInteger{};
    char character{};
    float realFloat{};
    double realDouble{};

    cout << "Enter Values: int, long long, char, float and double respectively. = ";

    cin >> integer >> longInteger >> character >> realFloat >> realDouble;

    cout << "Integer : " << integer << endl << "Long Long : " << longInteger << endl
        << "Char : " << character << endl << "Float : " << realFloat << endl
        << "Double : " << realDouble << endl;

    return 0;
}