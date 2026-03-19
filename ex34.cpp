#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int suma = 0;

    for(int i = n-4; i > 0; i -= 4) {
        suma += i*i;
    }

    cout << suma;
}