#include <iostream>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;

    if(a.substr(a.size()-3) == b.substr(b.size()-3))
        cout << "Rimen";
    else if(a.substr(a.size()-2) == b.substr(b.size()-2))
        cout << "Rimen un poc";
    else
        cout << "No rimen";
}