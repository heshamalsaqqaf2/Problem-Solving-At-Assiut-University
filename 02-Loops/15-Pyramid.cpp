#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number{};
    cout << "Enter Number = ";
    cin >> number;

    if (1 <= number && number <= 99) {
        for (int i = 1; i <= number; ++i) {
            for (int j = 0; j < i; ++j) {
                i + 2;
                cout << "*";
            }
            cout << "\n";
        }
    }
    else cout << "Enter Number In Rang (1<=N<=99)\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}