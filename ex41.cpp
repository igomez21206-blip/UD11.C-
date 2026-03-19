#include <iostream>
#include <vector>
using namespace std;

string esta_ordenada(vector<int> v) {
    bool asc = true, desc = true;

    for(int i = 1; i < v.size(); i++) {
        if(v[i] < v[i-1]) asc = false;
        if(v[i] > v[i-1]) desc = false;
    }

    if(asc) return "Ascendent";
    if(desc) return "Descendent";
    return "No ordenada";
}

int main() {
    vector<int> v = {3,2,1};
    cout << esta_ordenada(v);
}