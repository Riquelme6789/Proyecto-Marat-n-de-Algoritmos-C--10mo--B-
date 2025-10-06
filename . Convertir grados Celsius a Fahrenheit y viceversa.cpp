#include <iostream>
using namespace std;

int main() {
    double temp;
    char tipo;
    cout << "Ingrese la temperatura seguida de 'C' para Celsius o 'F' para Fahrenheit (ej: 25C): ";
    cin >> temp >> tipo;

    if (tipo == 'C' || tipo == 'c') {
        cout << temp << "°C = " << (temp * 9.0 / 5.0 + 32) << "°F" << endl;
    } else if (tipo == 'F' || tipo == 'f') {
        cout << temp << "°F = " << ((temp - 32) * 5.0 / 9.0) << "°C" << endl;
    } else {
        cout << "Tipo inválido." << endl;
    }

    return 0;
}