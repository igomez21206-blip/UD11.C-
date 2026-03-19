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

int main() {
    vector<int> v = {2,3,4};
    crear_punts(v);
}