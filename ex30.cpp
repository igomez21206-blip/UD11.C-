#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double c, interes;
    int anys;

    cin >> c >> interes >> anys;

    double resultat = c * pow(1 + interes/100, anys);

    cout << resultat << endl;
}