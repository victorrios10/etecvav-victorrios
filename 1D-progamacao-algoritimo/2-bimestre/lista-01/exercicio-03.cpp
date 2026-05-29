#include <iostream>

using namespace std;

int main() {

    int num;
    int soma = 0;

    while(true) {

        cout << "Digite um numero: ";
        cin >> num;

        if(num < 0) {
            break;
        }

        soma = soma + num;
    }

    cout << "Soma = " << soma;

    return 0;
}
