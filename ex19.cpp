#include <iostream>
using namespace std;

int comptarMajuscules(string s) {
    int cont = 0;
    for(char c : s) {
        if (isupper(c)) cont++;
    }
    return cont;
}

int main() {
    cout << comptarMajuscules("Hola QUE Tal") << endl;
}