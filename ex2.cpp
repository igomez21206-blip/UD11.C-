#include <iostream>
using namespace std;

string esMajorEdat(int edat) {
    if (edat > 18) return "És major d'edat";
    else if (edat < 18) return "No és major d'edat";
    else return "Té exactament 18 anys";
}

int main() {
    int edat;
    cout << "Introdueix l'edat: ";
    cin >> edat;

    cout << esMajorEdat(edat) << endl;

    return 0;
}