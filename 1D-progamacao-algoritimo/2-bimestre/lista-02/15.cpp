#include <iostream>

using namespace std;

int main() {

    int vetor[20];
    int i;
    int indice = -1;

    // leitura dos números
    for(i = 0; i < 20; i++) {

        cout << "Digite um numero: ";
        cin >> vetor[i];

    }

    // procurar primeiro número negativo
    for(i = 0; i < 20; i++) {

        if(vetor[i] < 0) {

            indice = i;
            break;

        }

    }

    // resultado
    if(indice != -1) {

        cout << "Indice do primeiro negativo = "
             << indice;

    } else {

        cout << "Nao existe numero negativo";

    }

    return 0;
}
