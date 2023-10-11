#include <iostream>

using namespace std;

int main() {

/*    char a;

    cout << "Podaj znak:";
    cin >> a;

    if (a >= 65 && a <= 90)
        cout << "Duza litera";
    else if (a >= 97 && a <=122)
        cout << "Mala litera";
    else if (a >= 48 && a <= 57)
        cout << "Cyfra";
    else
        cout << "Znak";


    int a, b;

    cout << "Podaj liczbe a:";
    cin >> a;
    cout << "Podaj liczbe b:";
    cin >> b;

    if (a % 2 == 0 && b % 2 == 0)
        cout << "Liczby sa parzyste" << endl;

    if (a + b == 5)
        cout << "Suma jest rowna 5";
    else
        cout << "Suma nie jest rowna 5";
*/

    int pkt;

    cout << "Twoja ilosc punktow:";
    cin >> pkt;

    if (pkt <= 39)
        cout << "Ocena niedostateczna";
    else if (pkt >= 40 && pkt <= 54)
        cout << "Ocena dopuszczajaca";
    else if (pkt >= 55 && pkt <= 69)
        cout << "Ocena dostateczna";
    else if (pkt >= 70 && pkt <= 84)
        cout << "Ocena dobra";
    else if (pkt >= 85 && pkt <= 98)
        cout << "Ocena bardzo dobra";
    else if (pkt >= 99 && pkt <= 100)
        cout << "Ocena celujaca";

    return 0;
}
