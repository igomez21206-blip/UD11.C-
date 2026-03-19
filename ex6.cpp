#include <iostream>
using namespace std;

int gran_de_tres(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    cout << gran_de_tres(3, 7, 5) << endl;
    cout << gran_de_tres(10, 2, 8) << endl;
}