#include <iostream>
#include <vector>
using namespace std;

vector<string> filtrar_paraules(vector<string> v, int x) {
    vector<string> resultat;
    for(string s : v) {
        if (s.length() > x) resultat.push_back(s);
    }
    return resultat;
}

int main() {
    vector<string> v = {"Hola","Ramis","IES","Paraula"};
    vector<string> res = filtrar_paraules(v, 4);

    for(string s : res) cout << s << " ";
}