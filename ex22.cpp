#include <iostream>
#include <vector>
using namespace std;

void mostrar_majors_que(vector<int> v, int num) {
    for(int x : v) {
        if (x > num) cout << x << " ";
    }
}

int main() {
    vector<int> v;
    int n, x;

    cout << "Quants numeros: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "Majors de 18: ";
    mostrar_majors_que(v, 18);
}