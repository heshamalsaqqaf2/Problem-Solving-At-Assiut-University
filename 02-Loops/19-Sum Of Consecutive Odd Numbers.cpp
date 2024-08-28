#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int testCaseNumber{}, n{}, m{};
    cout << "Enter Number Of Test Cases = ";
    cin >> testCaseNumber;


    cout << "Enter Two Pairs Of " << testCaseNumber << " Numbers = ";
    while (testCaseNumber > 0) {
        cin >> n >> m;

        int sum{ 0 };
        if (n > 0 && m > 0) {
            if (n > m) {
                for (int i = m + 1; i < n; ++i) {
                    if (i % 2 != 0) {
                        sum += i;
                        cout << i << " ";
                    }
                }
                cout << "Sum Odd Numbers = " << sum << "\n";
            }
            else {
                for (int i = n + 1; i < m; ++i) {
                    if (i % 2 != 0) {
                        sum += i;
                        // cout << i << " ";
                    }
                }
                cout << "Sum Odd Numbers = " << sum << "\n";
            }
        }
        --testCaseNumber;
    }
    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}