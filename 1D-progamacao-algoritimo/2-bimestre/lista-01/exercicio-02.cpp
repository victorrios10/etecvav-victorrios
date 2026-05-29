#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int num, i;

    cout << "Digite um numero: ";
    cin >> num;

    for(i = 0; i <= num; i++) {

        cout << "2^" << i << " = " << pow(2, i) << endl;

    }

    return 0;
}
