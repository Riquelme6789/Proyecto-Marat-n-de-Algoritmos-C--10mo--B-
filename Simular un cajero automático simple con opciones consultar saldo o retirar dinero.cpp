#include <iostream>
using namespace std;

int main() {
    int saldo = 1000;
    int opcion, retiro;

    cout << "=== Cajero automático ===" << endl;
    cout << "1. Consultar saldo\n2. Retirar dinero\nSeleccione opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Su saldo es: $" << saldo << endl;
            break;
        case 2:
            cout << "Ingrese monto a retirar: ";
            cin >> retiro;
            if (retiro <= saldo) {
                saldo -= retiro;
                cout << "Retiro exitoso. Saldo restante: $" << saldo << endl;
            } else {
                cout << "Saldo insuficiente." << endl;
            }
            break;
        default:
            cout << "Opción inválida." << endl;
    }

    return 0;
}
