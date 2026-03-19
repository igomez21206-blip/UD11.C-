#include <iostream>
using namespace std;

int main() {
    int anyActual;
    cout << "Any actual: ";
    cin >> anyActual;

    string noms[4];
    int naix[4];

    for(int i = 0; i < 4; i++) {
        cout << "Nom: ";
        cin >> noms[i];
        cout << "Any naixement: ";
        cin >> naix[i];
    }

    cout << "\nNom\tNaixement\tEdat\n";

    for(int i = 0; i < 4; i++) {
        cout << noms[i] << "\t" << naix[i] << "\t\t" 
             << (anyActual - naix[i]) << endl;
    }
}