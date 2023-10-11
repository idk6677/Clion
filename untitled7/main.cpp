#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c, x, x1, x2, d;

    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b:";
    cin >> b;
    cout << "Podaj c:";
    cin >> c;

    d = pow(b, 2) - 4 * a * c;

    x1 = -b - sqrt(d) / (2 * a);
    x2 = -b + sqrt(d) / (2 * a);

    x = -b / 2 * a;

    if (a != 0)
        cout << "Delta:" << d << endl;
    else {
        cout << "To nie jest rownanie kwadratowe";
        return 0;
    }

    if (d > 0)
        cout << "x1=" << x1 << endl << "x2=" << x2;
    else if (d == 0)
        cout << "Wynik:" << x;
    else
        cout << "Rownanie nie ma rozwiazania";


    return 0;
}
