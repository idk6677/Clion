#include <iostream>
#include "cmath"

using namespace std;

int main() {

    int r = 10, p, obw;
    p = M_PI * pow(r, 2);
    obw = 2 * M_PI * r;

    cout << "P = " << p << endl;
    cout << "O = " << obw << endl;


    return 0;
}
