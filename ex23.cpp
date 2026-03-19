#include <iostream>
#include <vector>
using namespace std;

int comptarA(vector<string> v) {
    int cont = 0;
    for(string s : v) {
        if (s[0] == 'a' || s[0] == 'A') cont++;
    }
    return cont;
}

int main() {
    vector<string> v = {"Anna","Pere","Arnau","Maria"};
    cout << comptarA(v) << endl;
}