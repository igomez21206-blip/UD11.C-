#include <iostream>
#include <algorithm>
using namespace std;

string invertir(string s) {
    reverse(s.begin(), s.end());
    return s;
}

bool es_palindrom(string s) {
    return s == invertir(s);
}

int main() {
    cout << es_palindrom("radar") << endl;
    cout << es_palindrom("hola") << endl;
}