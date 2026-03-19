#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Introdueix operacio (+ - * /): ";
    cin >> op;
    cout << "Introdueix dos numeros: ";
    cin >> a >> b;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': 
            if (b != 0) cout << a / b;
            else cout << "Error divisio";
            break;
    }

    return 0;
}