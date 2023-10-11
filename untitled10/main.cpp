#include <iostream>

using namespace std;

int main() {

    int l = 28;
    string wynik = " ", odwr_w = " ";


    while (l > 0) {
        if (l % 2 == 0) {
            wynik += "0";
        }
        else
            wynik += "1";
        l = int(l / 2);
    }

    for (int i = wynik.length()-1; i >= 0; i--){
        odwr_w += wynik[i];
    }

    cout << "Wynik:" << odwr_w;

    return 0;
}
