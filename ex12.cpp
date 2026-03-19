#include <iostream>
#include <vector>
using namespace std;

bool superposicio(vector<int> a, vector<int> b) {
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) return true;
        }
    }
    return false;
}

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {4,5,3};

    cout << superposicio(a, b) << endl;
}