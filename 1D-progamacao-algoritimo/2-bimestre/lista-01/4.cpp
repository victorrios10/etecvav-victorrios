#include <iostream>

using namespace std;

// função de adição
int soma(int a, int b) {

    return a + b;

}

// função de subtração
int subtracao(int a, int b) {

    return a - b;

}

// função de multiplicação
int multiplicacao(int a, int b) {

    return a * b;

}

// função de divisão
float divisao(int a, int b) {

    return (float)a / b;

}

int main() {

    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Adicao = " << soma(num1, num2) << endl;

    cout << "Subtracao = " << subtracao(num1, num2) << endl;

    cout << "Multiplicacao = " << multiplicacao(num1, num2) << endl;

    cout << "Divisao = " << divisao(num1, num2);

    return 0;
}
