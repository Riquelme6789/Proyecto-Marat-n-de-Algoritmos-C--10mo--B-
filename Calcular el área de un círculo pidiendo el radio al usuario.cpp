#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    double area = M_PI * radio * radio;
    cout << "Área del círculo: " << area << endl;
    return 0;
}
