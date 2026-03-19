#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret[4];

    for(int i=0;i<4;i++) secret[i]=rand()%10;

    int guess[4];

    while(true) {
        cout << "Introdueix 4 digits: ";
        for(int i=0;i<4;i++) cin >> guess[i];

        int correctes=0, coincidencies=0;

        for(int i=0;i<4;i++) {
            if(guess[i]==secret[i]) correctes++;
            else {
                for(int j=0;j<4;j++)
                    if(guess[i]==secret[j]) coincidencies++;
            }
        }

        cout << "Correctes: " << correctes 
             << " Coincidencies: " << coincidencies << endl;

        if(correctes==4) break;
    }
}