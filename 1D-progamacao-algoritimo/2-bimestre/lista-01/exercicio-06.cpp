#include <iostream>

using namespace std;

int main() {

    int num;
    int soma = 0;
    int multiplicacao = 1;

    while(soma <= 100) {

        cout << "Digite um numero: ";
        cin >> num;

        soma = soma + num;

        multiplicacao = multiplicacao * num;

    }

    cout << "Multiplicacao = " << multiplicacao;

    return 0;
}
