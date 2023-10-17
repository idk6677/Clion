#include <iostream>

using namespace std;

int main() {

    //Napisz program wyznaczający najmniejszą z trzech liczb podanych przez użytkownika.
/*
    int a, b, c;

    cout << "Podaj 1 liczbe:";
    cin >> a;
    cout << "Podaj 2 liczbe:";
    cin >> b;
    cout << "Podaj 3 liczbe:";
    cin >> c;

    if (a < b && a < c)
        cout << "Pierwsza liczba jest najmniejsza";
    else if (b < a && b < c)
        cout << "Druga liczba jest najmniejsza";
    else if (c < a && c < b)
        cout << "Trzecia liczba jest najmniejsza";
    else
        cout << "Zadna liczba nie jest najmniejsza";


    //Napisz program podawania daty w formacie – dzień (od 1 do 31), miesiąc (od 1 do 12), rok (od 1900 do 2050).
    // Użytkownik wprowadza każdą z wartości w osobnym kroku. Jeżeli wprowadzona wartość jest błędna program kończy swoje działanie.
    // Jeżeli wszystkie trzy wartości są poprawne program wyświetla datę np. 7.12.2009

    int d, m, r;

    cout << "Podaj dzien(1-31): ";
    cin >> d;

    if (d >= 1 && d <= 31) {
        cout << "Podaj miesiac(1-12): ";
        cin >> m;
        if (m >= 1 && m <= 12) {
            cout << "Podaj rok(1900-2050): ";
            cin >> r;
            if (r >= 1900 && r <= 2050)
                cout << d << "." << m << "." << r;
        }
    }
*/

    //Napisz program sprawdzający czy z boków o długościach podanych przez użytkownika można zbudować trójkąt.

    int a, b, c;

    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b:";
    cin >> b;
    cout << "Podaj c:";
    cin >> c;

    if (a + b > c && b + c > a && c + a > b)
        cout << "Z danych bokow mozna zbudowac trojkat";
    else
        cout << "Z danych bokow nie mozna zbudowac trojkata";


    return 0;
}
