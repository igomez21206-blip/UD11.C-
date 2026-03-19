#include <iostream>
#include <vector>
using namespace std;

bool hi_ha_duplicats(vector<int> v) {
    for(int i=0;i<v.size();i++) {
        for(int j=i+1;j<v.size();j++) {
            if(v[i]==v[j]) return true;
        }
    }
    return false;
}

int main() {
    vector<int> v = {1,2,3,2};
    cout << hi_ha_duplicats(v);
}