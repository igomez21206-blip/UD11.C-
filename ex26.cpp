#include <iostream>
using namespace std;

bool es_de_traspas(int any) {
    return (any % 4 == 0 && any % 100 != 0) || (any % 400 == 0);
}

int main() {
    int any;
    cin >> any;

    if (es_de_traspas(any)) cout << "Si";
    else cout << "No";
}