#include <iostream>

using namespace std;

int main() {

    char letras[20];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    int i;
    int contador = 0;

    // leitura das letras
    for(i = 0; i < 20; i++) {

        cout << "Digite uma letra: ";
        cin >> letras[i];

    }

    // contar vogais
    for(i = 0; i < 20; i++) {

        if(letras[i] == 'a' || letras[i] == 'e' ||
           letras[i] == 'i' || letras[i] == 'o' ||
           letras[i] == 'u') {

            contador++;

        }

    }

    cout << "Quantidade de vogais = "
         << contador << endl;

    // exibir vetor de vogais
    cout << "Vetor de vogais:" << endl;

    for(i = 0; i < 5; i++) {

        cout << vogais[i] << " ";

    }

    return 0;
}
