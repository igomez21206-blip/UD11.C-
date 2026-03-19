#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double capital, interes;
    int anys;

    cout << "Capital (50000-800000): ";
    cin >> capital;

    cout << "Interes (0.5-13): ";
    cin >> interes;

    cout << "Anys (3-40): ";
    cin >> anys;

    if(capital < 50000 || capital > 800000 ||
       interes < 0.5 || interes > 13 ||
       anys < 3 || anys > 40) {
        cout << "Valors incorrectes";
        return 0;
    }

    double resultat = capital * pow(1 + interes/100, anys);

    cout << "Capital final: " << resultat << endl;
}