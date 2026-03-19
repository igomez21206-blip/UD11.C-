#include <iostream>
#include <vector>
using namespace std;

vector<int> eliminarcapicua(vector<int> v) {
    vector<int> res;
    for(int i = 1; i < v.size()-1; i++) {
        res.push_back(v[i]);
    }
    return res;
}

int main() {
    vector<int> v = {1,2,3,4,5};
    vector<int> r = eliminarcapicua(v);

    for(int x : r) cout << x << " ";
}