#include <iostream>
#include <algorithm>
using namespace std;

string invertir(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    cout << invertir("Soc del Ramis") << endl;
}