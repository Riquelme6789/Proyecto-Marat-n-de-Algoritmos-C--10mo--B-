#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número para calcular su factorial: ";
    cin >> n;

    unsigned long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial de " << n << " es " << factorial << endl;
    return 0;
}

