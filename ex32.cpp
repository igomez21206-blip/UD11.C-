#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cont = 0;

    while(n > 0) {
        n /= 10;
        cont++;
    }

    cout << cont << endl;
}