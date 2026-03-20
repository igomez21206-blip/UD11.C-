#include <iostream>
#include <vector>
using namespace std;

void elements_parells(vector<string> v) {
    for(int i = 0; i < v.size(); i += 2) {
        cout << v[i] << " ";
    }
}

int main() {
    vector<string> v = {"Hola","Adeu","Bon","Dia","Test"};
    elements_parells(v);

    return 0;
}