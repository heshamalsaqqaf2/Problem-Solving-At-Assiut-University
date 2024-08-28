#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number{}, fromNumber{}, inNumber{};
    cout << "Enter 3 Numbers = ";
    cin >> number >> fromNumber >> inNumber;

    int sumDigits{ 0 };
    for (int i = 1; i <= number; ++i) {
        int sumLastDigit{ 0 };
        int counter = i;
        while (counter > 0) {
            sumLastDigit += counter % 10;
            counter /= 10;
        }
        if (fromNumber <= sumLastDigit && sumLastDigit <= inNumber) {
            sumDigits += i;
            // cout << i << " ";
        }
    }
    cout << "Summation = " << sumDigits << "\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}