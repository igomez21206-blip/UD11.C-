#include <iostream>
#include <vector>
using namespace std;

int gran_llista(vector<int> v) {
    int max = v[0];
    for(int i = 1; i < v.size(); i++) {
        if (v[i] > max) max = v[i];
    }
    return max;
}

int main() {
    vector<int> v = {3,4,2,3,10};
    cout << gran_llista(v) << endl;
}