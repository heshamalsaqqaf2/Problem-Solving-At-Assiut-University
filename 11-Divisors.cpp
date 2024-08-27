#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int targetNumber{};
    cout << "Enter Numbers = ";
    cin >> targetNumber;

    if (targetNumber > 0) {
        cout << "All Divisors Of Target Number = ";
        for (int counterNumber = 1; counterNumber < targetNumber + 1; ++counterNumber) {
            if (targetNumber % counterNumber == 0)
                cout << counterNumber << " ";
        }
    }
    else cout << "Sorry, Enter Number Greater Or Equal 1";

    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}