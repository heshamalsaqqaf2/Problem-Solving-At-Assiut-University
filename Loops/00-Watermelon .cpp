#include <iostream>
using namespace std;

int main() {
    int watermelon;
    cin >> watermelon ;
    if(watermelon > 2){
        if(watermelon % 2 == 0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    } else
        cout<<"No\n";
    return 0;
}