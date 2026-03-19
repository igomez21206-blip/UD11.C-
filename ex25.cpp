#include <iostream>
using namespace std;

void comptar_vocals(string s) {
    int a=0,e=0,i=0,o=0,u=0;

    for(char c : s) {
        c = tolower(c);
        if(c=='a') a++;
        if(c=='e') e++;
        if(c=='i') i++;
        if(c=='o') o++;
        if(c=='u') u++;
    }

    cout << "a: " << a << " e: " << e << " i: " << i 
         << " o: " << o << " u: " << u << endl;
}

int main() {
    comptar_vocals("Ratapinyada");
}