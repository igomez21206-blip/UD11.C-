#include <iostream>
using namespace std;

string crear_repetits(int n, char c) {
    return string(n, c);
}

int main() {
    cout << crear_repetits(5, 'a') << endl;
}