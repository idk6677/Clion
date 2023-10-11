#include <iostream>

using namespace std;

int main() {

/*    int tab[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int i = 0; i < sizeof(tab)/sizeof(tab[0]); i++)
        cout << tab[i] << ", ";


int tab[10];

    for (int i = 0; i < 10; i++)
        cin >> tab[i];

    for (int i = 0; i < 10; i++)
        cout << tab[i] << ", ";

*/

    int tab[] = {1, 2, 3};
    int min = tab[0], index = 0;

    for (int i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)
        if (tab[i] < min) {
            min = tab[i];
            index = i;
        }
    cout << "Najmniejszym elementem jest " << min << ", ktory znajduje sie pod indeksem " << index;

    return 0;
}