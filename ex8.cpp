#include <iostream>
using namespace std;

bool esVocal(char c) {
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main() {
    cout << esVocal('a') << endl;
    cout << esVocal('b') << endl;
}