#include <iostream>

using namespace std;

int main() {

    int vetor[10];
    int i, j, temp;

    // leitura dos números
    for(i = 0; i < 10; i++) {

        cout << "Digite um numero: ";
        cin >> vetor[i];

    }

    // ordenar vetor
    for(i = 0; i < 10; i++) {

        for(j = i + 1; j < 10; j++) {

            if(vetor[i] > vetor[j]) {

                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;

            }

        }

    }

    // exibir terceiro menor
    cout << "Terceiro menor valor = "
         << vetor[2];

    return 0;
}
