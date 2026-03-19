#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string op;
    int punts = 0;

    do {
        int correcte = rand()%2+1;
        int eleccio;

        cout << "Tria 1 o 2: ";
        cin >> eleccio;

        if(eleccio == correcte) {
            cout << "Has guanyat!\n";
            punts++;
        } else {
            cout << "Has perdut!\n";
            break;
        }

        cout << "Continuar? (si/no): ";
        cin >> op;

    } while(op == "si");

    cout << "Punts: " << punts << endl;
}