#include <iostream>

using namespace std;

int main() {

    char letras[20];
    char letra;
    int i;
    int contador = 0;

    // leitura das letras
    for(i = 0; i < 20; i++) {

        cout << "Digite uma letra: ";
        cin >> letras[i];

    }

    // letra para procurar
    cout << "Digite a letra para buscar: ";
    cin >> letra;

    // contagem
    for(i = 0; i < 20; i++) {

        if(letras[i] == letra) {

            contador++;

        }

    }

    cout << "A letra apareceu "
         << contador
         << " vezes.";

    return 0;
}

