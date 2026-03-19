#include <iostream>
#include <vector>
using namespace std;

int comptar(vector<string> v, char lletra) {
    int cont = 0;
    for(string s : v) {
        if (tolower(s[0]) == tolower(lletra)) cont++;
    }
    return cont;
}

int main() {
    vector<string> v = {"Anna","Pere","Arnau","Maria"};
    char l;
    cout << "Lletra: ";
    cin >> l;

    cout << comptar(v, l);
}