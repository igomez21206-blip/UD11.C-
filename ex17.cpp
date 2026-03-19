#include <iostream>
#include <vector>
using namespace std;

string paraula_mes_llarga(vector<string> v) {
    string max = v[0];
    for(int i = 1; i < v.size(); i++) {
        if (v[i].length() > max.length()) {
            max = v[i];
        }
    }
    return max;
}

int main() {
    vector<string> v = {"Hola","Ramis","IES","Paraula"};
    cout << paraula_mes_llarga(v) << endl;
}