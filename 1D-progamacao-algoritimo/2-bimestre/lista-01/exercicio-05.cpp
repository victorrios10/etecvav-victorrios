#include <iostream>

using namespace std;

int main() {

    int final, multiplo;
    int i;

    cout << "Digite o numero final: ";
    cin >> final;

    cout << "Digite o multiplo: ";
    cin >> multiplo;

    for(i = 1; i <= final; i++) {

        if(i % multiplo == 0) {

            cout << i << endl;

        }

    }

    return 0;
}
