#include <iostream>
using namespace std;

int main() {
    int watermelon;
    cin >> watermelon;
    if (watermelon > 2) {
        if (watermelon % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else
        cout << "Watermelon Less Than 2\n";
    return 0;
}