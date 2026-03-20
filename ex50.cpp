#include <iostream>
using namespace std;

bool esPrimer(int n) {
    if(n < 2) return false;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

int main() {
    int contador = 0;

    for(int i = 1; i <= 100; i++) {
        if(esPrimer(i)) {
            cout << i << " ";
            contador++;
        }
    }

    cout << "\nTotal: " << contador << endl;

    return 0;
}