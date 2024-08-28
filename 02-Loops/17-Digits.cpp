#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int testCaseNumber{};
    cout << "Enter Number = ";
    cin >> testCaseNumber;

    cout << "Enter " << testCaseNumber << " Numbers = ";
    while (testCaseNumber > 0) {
        int numbers{};
        cin >> numbers;

        int lastDigit{ 0 };
        while (numbers > 0) {
            lastDigit = lastDigit * 10 + numbers % 10;
            numbers /= 10;
        }
        cout << lastDigit << " ";
        --testCaseNumber;
    }

    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}