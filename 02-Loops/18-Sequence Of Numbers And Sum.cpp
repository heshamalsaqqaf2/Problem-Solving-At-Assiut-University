#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int n{}, m{};
    cout << "Enter Two Numbers = ";
    cin >> n >> m;

    int sum{ 0 };
    if (n > 0 && m > 0) {
        if (n > m) {
            for (int i = m; i <= n; ++i) {
                sum += i;
                cout << i << " ";
            }
            cout << "Sum = " << sum;
        }
        else {
            for (int i = n; i <= m; ++i) {
                sum += i;
                cout << i << " ";
            }
            cout << "Sum  = " << sum;
        }
    }
    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}