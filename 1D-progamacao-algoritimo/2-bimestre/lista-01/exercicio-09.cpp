#include <iostream>

using namespace std;

int main() {

    int limite;
    int a = 0;
    int b = 1;
    int prox;

    cout << "Digite um numero entre 50 e 100: ";
    cin >> limite;

    if(limite < 50 || limite > 100) {

        cout << "Numero invalido";

    } else {

        cout << a << " ";
        cout << b << " ";

        prox = a + b;

        while(prox <= limite) {

            cout << prox << " ";

            a = b;
            b = prox;

            prox = a + b;

        }

    }

    return 0;
}
