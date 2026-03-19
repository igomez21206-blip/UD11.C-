#include <iostream>
#include <vector>
using namespace std;

int sumar_llista(vector<int> v) {
    int suma = 0;
    for(int i = 0; i < v.size(); i++) {
        suma += v[i];
    }
    return suma;
}

int multiplicar_llista(vector<int> v) {
    int prod = 1;
    for(int i = 0; i < v.size(); i++) {
        prod *= v[i];
    }
    return prod;
}

int main() {
    vector<int> v = {1,2,3,4};

    cout << sumar_llista(v) << endl;
    cout << multiplicar_llista(v) << endl;
}