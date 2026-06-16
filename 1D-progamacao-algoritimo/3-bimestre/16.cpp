#include <iostream>

using namespace std;

int main() {

    int vetor[15];
    int i;

    int maior, menor;
    int indiceMaior = 0;
    int indiceMenor = 0;

    // leitura dos números
    for(i = 0; i < 15; i++) {

        cout << "Digite um numero: ";
        cin >> vetor[i];

    }

    // iniciar com o primeiro valor
    maior = vetor[0];
    menor = vetor[0];

    // verificar maior e menor
    for(i = 1; i < 15; i++) {

        if(vetor[i] > maior) {

            maior = vetor[i];
            indiceMaior = i;

        }

        if(vetor[i] < menor) {

            menor = vetor[i];
            indiceMenor = i;

        }

    }

    cout << "Indice do maior valor = "
         << indiceMaior << endl;

    cout << "Indice do menor valor = "
         << indiceMenor;

    return 0;
}
