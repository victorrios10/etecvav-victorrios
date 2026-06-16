#include <iostream>
#include <string>

using namespace std;

int main() {

    string nomes[10];
    string temp;
    int i, j;

    // leitura dos nomes
    for(i = 0; i < 10; i++) {

        cout << "Digite um nome: ";
        cin >> nomes[i];

    }

    // ordenação em ordem crescente
    for(i = 0; i < 10; i++) {

        for(j = i + 1; j < 10; j++) {

            if(nomes[i] > nomes[j]) {

                temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;

            }

        }

    }

    // exibir nomes
    cout << "Nomes em ordem crescente:" << endl;

    for(i = 0; i < 10; i++) {

        cout << nomes[i] << endl;

    }

    return 0;
}
