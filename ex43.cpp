#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

vector<int> llista_20_elements() {
    vector<int> v;
    for(int i=0;i<20;i++) {
        v.push_back(rand()%100+1);
    }
    return v;
}

int main() {
    vector<int> v = llista_20_elements();
    for(int x : v) cout << x << " ";
}