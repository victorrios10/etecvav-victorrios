
#include <iostream>
using namespace std;

int main() {

    int num;
    bool primo = true;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    // verifica numeros menores que 2
    if(num < 2) {
        primo = false;
    }

    // testa os divisores
    for(int i = 2; i < num; i++) {

        if(num % i == 0) {
            primo = false;
        }

    }

    // resultado
    if(primo) {

        cout << "O numero e primo.";

    } else {

        cout << "O numero nao e primo.";

    }

    return 0;
}

