#include <iostream>

using namespace std;

int main() {

/*    cout << 4 % 9 << endl;
    cout << -2 -8 << endl;
    cout << 4 / 5 % 3 << endl;
    cout << 3 / (5 % 2) << endl;
    cout << 8 / 6 << endl;
    cout << 2 / 4;

int a, b;

cout << "Podaj a:";
cin >> a;
cout << "Podaj b:";
cin >> b;

if (a > b)
    cout << "a jest wieksze od b";
if (b > a)
    cout << "b jest wieksze od a";
if (a == b)
    cout << "a jest rowne b";
if (a != b)
    cout << endl << "a jest rozne od b";


int predkosc;

cout << "Ilosc przekroczenia:";
cin >> predkosc;

if (predkosc <= 10)
    cout << "Mandat wynosi 100";
else
    if (predkosc <= 30)
        cout << "Mandat wynosi 200";
    else
        cout << "Mandat wynosi 400";
*/

int wzrost;

cout << "Podaj swoj wzrost: ";
cin >> wzrost;

if (wzrost < 150)
    cout << "Karzel";
else if (wzrost < 160)
    cout << "bardzo niski";
else if (wzrost < 170)
    cout << "Niski";
else if (wzrost < 180)
    cout << "Sredni";
else if (wzrost < 190)
    cout << "Wysoki";
else if (wzrost < 220)
    cout << "Bardzo wysoki";
else
    cout << "Czy napewno podales poprawna liczbe?";

return 0;
}
