#include <iostream>

using namespace std;

int main() {

    int vetor[15];
    int i;
    int pares = 0;
    int impares = 0;

    // leitura dos números
    for(i = 0; i < 15; i++) {

        cout << "Digite um numero: ";
        cin >> vetor[i];

    }

    // verificar pares e ímpares
    for(i = 0; i < 15; i++) {

        if(vetor[i] % 2 == 0) {

            pares++;

        } else {

            impares++;

        }

    }

    cout << "Quantidade de pares = " << pares << endl;
    cout << "Quantidade de impares = " << impares;

    return 0;
}
