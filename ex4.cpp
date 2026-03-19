#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;

    cout << "Numero decimal: ";
    cin >> num;

    cout << "Binari: " << bitset<8>(num) << endl;
    cout << "Octal: " << oct << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;

    return 0;
}