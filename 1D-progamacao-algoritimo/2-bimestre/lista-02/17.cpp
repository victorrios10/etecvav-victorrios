#include <iostream>

using namespace std;

int main() {

    int vetor1[10];
    int vetor2[10];

    int i;
    int soma = 0;

    // leitura do primeiro vetor
    for(i = 0; i < 10; i++) {

        cout << "Digite um numero: ";
        cin >> vetor1[i];

    }

    // inverter sinais e somar positivos
    for(i = 0; i < 10; i++) {

        vetor2[i] = vetor1[i] * -1;

        if(vetor1[i] > 0) {

            soma = soma + vetor1[i];

        }

        if(vetor2[i] > 0) {

            soma = soma + vetor2[i];

        }

    }

    // exibir segundo vetor
    cout << "Vetor com sinais invertidos:" << endl;

    for(i = 0; i < 10; i++) {

        cout << vetor2[i] << " ";

    }

    cout << endl;

    cout << "Soma dos positivos = " << soma;

    return 0;
}
