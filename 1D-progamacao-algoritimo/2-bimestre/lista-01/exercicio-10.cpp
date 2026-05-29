#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int segredo;
    int palpite;
    int tentativas = 0;

    srand(time(0));

    segredo = rand() % 100 + 1;

    do {

        cout << "Digite um palpite: ";
        cin >> palpite;

        tentativas++;

        if(palpite > segredo) {

            cout << "Muito alto" << endl;

        } else if(palpite < segredo) {

            cout << "Muito baixo" << endl;

        } else {

            cout << "Correto!" << endl;

        }

    } while(palpite != segredo);

    cout << "Quantidade de palpites = " << tentativas;

    return 0;
}
