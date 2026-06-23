#include <iostream>

using namespace std;

int main() {

    int vetor[10];
    int i;

    // leitura dos números
    for(i = 0; i < 10; i++) {

        cout << "Digite um numero: ";
        cin >> vetor[i];

    }

    // substituir negativos por zero
    for(i = 0; i < 10; i++) {

        if(vetor[i] < 0) {

            vetor[i] = 0;

        }

    }

    // exibir vetor
    cout << "Vetor:" << endl;

    for(i = 0; i < 10; i++) {

        cout << vetor[i] << " ";

    }

    return 0;
}
