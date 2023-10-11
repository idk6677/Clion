#include <iostream>
#include <cmath>

using namespace std;

int main() {
/*
    int a, b;

    cout << "Liczba a:";
    cin >> a;

    cout << "Liczba b:";
    cin >> b;

    cout << "Suma:" << (a+b);


    double waga, wzrost, bmi;

    cout << "Twoja waga:";
    cin >> waga;
    cout << "Twoj wzrost:";
    cin >> wzrost;

    bmi = waga / pow(wzrost, 2);
    cout << "Twoje bmi:" << bmi << endl;

    if (bmi < 18.5)
        cout << "Jestes za chudy";
    else if (bmi > 25)
        cout << "Jestes za gruby";
    else
        cout << "Twoja waga jest ok";
    */

    int r, h, pp, pb, pc, v;

    cout << "Podaj r:";
    cin >> r;

    cout << "Podaj h:";
    cin >> h;

    if (r <= 0){
        cout << "To nie jest walec";
        return 0;
    }
    if (h <= 0){
        cout << "To nie jest walec";
        return 0;
    }

    pp = M_PI * pow(r, 2);
    pb = 2 * M_PI * r * h;
    pc = pp + pb;
    v = 2 * pp * h;

    cout << "Pole powierzchni wynosi:" << pc << endl;
    cout << "Objetosc wynosi:" << v;


    return 0;
}



