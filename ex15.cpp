#include <iostream>
#include <vector>
using namespace std;

void crear_punts(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i]; j++) {
            cout << ".";
        }
        cout << endl;
    }
}

void dibuix() {
    vector<int> v = {1,3,5,3,1};
    crear_punts(v);
}

int main() {
    dibuix();
}