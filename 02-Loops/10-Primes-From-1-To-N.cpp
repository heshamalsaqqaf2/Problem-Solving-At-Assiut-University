#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int targetNumber{};
    cout << "Enter Numbers = ";
    cin >> targetNumber;

    if (targetNumber > 1) {
        bool isPrime{ true };
        cout << "All Prime Target Number = ";

        for (int number = 2; number < targetNumber; ++number) {
            for (int primeNumbers = 2; primeNumbers < number; ++primeNumbers) {
                if (number % primeNumbers == 0) {
                    isPrime = false;
                    break;
                }
                else isPrime = true;
            }
            if (isPrime)
                cout << number << " ";
        }
    }
    else cout << "Sorry, Enter Number Greater Or Equal 2.\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}