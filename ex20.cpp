#include <iostream>
using namespace std;

int main() {
    string bin;
    cout << "Binari: ";
    cin >> bin;

    int resultat = 0;
    for(char c : bin) {
        resultat = resultat * 2 + (c - '0');
    }

    cout << "Decimal: " << resultat << endl;
}