#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 0) cout << digit << " ";
        n /= 10;
    }
}