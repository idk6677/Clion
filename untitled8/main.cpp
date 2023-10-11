#include <iostream>

using namespace std;
int main() {

    int h;
    string gw = "*";

    cout << "Podaj wysokosc:";
    cin >> h;

    while (h > 0){
        for (int i = h; i > 0; i--)
            cout << " ";
        cout << gw;
        cout << endl;
        h--;
        gw += "**";
    }

    for (int i = 0; i++) {
        cout << " ";
    }
    cout << "***";

    return 0;
}
