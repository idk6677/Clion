#include <iostream>

using namespace std;

int main() {
/*
    int a = 10, b = 49, wynik;
    char znak;

    cout << "Podaj dzialanie matematyczne (+, -, *, /): ";
    cin >> znak;

    switch (znak){
        case '+':
            wynik = a + b;
            break;
        case '-':
            wynik = a - b;
            break;
        case '*':
            wynik = a * b;
            break;
        default:
            wynik = a / b;
            break;
    }

    cout << a << znak << b << " = " << wynik;


    int pkt;

    cout << "Podaj liczbe punktow:";
    cin >> pkt;

    switch (pkt){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "2";
            break;
        case 11:
        case 12:
        case 13:
            cout << "3";
            break;
        case 14:
        case 15:
        case 16:
            cout << "4";
            break;
        default:
            cout << "5";
            break;
    }
    */

    int zl, wynik;
    char waluta;

    cout << "Podaj kwote w zl:";
    cin >> zl;

    cout << "Wybierz walute (1-funt,2-dolar,3-euro):";
    cin >> waluta;

    switch (waluta){
        case '1':
            wynik = zl * 4.97;
            break;
        case '2':
            wynik = zl * 3.8428;
            break;
        case '3':
            wynik = zl * 4.5;
            break;
    }

    cout << "Przeliczona kwota:" << wynik;

    return 0;
}
