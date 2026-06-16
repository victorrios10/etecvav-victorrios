#include <iostream>

using namespace std;

int main() {

    int numeros[10];
    int pares[10];
    int impares[10];
    int soma[10];

    int qtdPares = 0;
    int qtdImpares = 0;

    int i, j, temp;

    // leitura dos números
    for(i = 0; i < 10; i++) {

        cout << "Digite um numero: ";
        cin >> numeros[i];

    }

    // separar pares e ímpares
    for(i = 0; i < 10; i++) {

        if(numeros[i] % 2 == 0) {

            pares[qtdPares] = numeros[i];
            qtdPares++;

        } else {

            impares[qtdImpares] = numeros[i];
            qtdImpares++;

        }

    }

    // ordenar pares
    for(i = 0; i < qtdPares; i++) {

        for(j = i + 1; j < qtdPares; j++) {

            if(pares[i] > pares[j]) {

                temp = pares[i];
                pares[i] = pares[j];
                pares[j] = temp;

            }

        }

    }

    // ordenar ímpares
    for(i = 0; i < qtdImpares; i++) {

        for(j = i + 1; j < qtdImpares; j++) {

            if(impares[i] > impares[j]) {

                temp = impares[i];
                impares[i] = impares[j];
                impares[j] = temp;

            }

        }

    }

    // somar os vetores
    for(i = 0; i < 10; i++) {

        soma[i] = pares[i] + impares[i];

    }

    // exibir pares
    cout << "Vetor pares:" << endl;

    for(i = 0; i < qtdPares; i++) {

        cout << pares[i] << " ";

    }

    cout << endl;

    // exibir ímpares
    cout << "Vetor impares:" << endl;

    for(i = 0; i < qtdImpares; i++) {

        cout << impares[i] << " ";

    }

    cout << endl;

    // exibir soma
    cout << "Vetor soma:" << endl;

    for(i = 0; i < 10; i++) {

        cout << soma[i] << " ";

    }

    return 0;
}
