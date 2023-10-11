#include <iostream>

using namespace std;

int main() {
   int a = 2, b = 3, c = 4, d = 5 , x = 6, v;
   v = a * x + b;
   v = v * x + c;
   v = v * x + d;

   cout << "v=" << v;

    return 0;
}
