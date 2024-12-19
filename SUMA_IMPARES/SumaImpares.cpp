#include <iostream>
using namespace std;
int main() {
    int contador=0;
    int array[15];
    int suma_impares = 0;
    for(int i = 0; i <15;i++) {
        cout << "Ingrese el valor para la posicion" << i +1 << ": ";
        cin >> array[i];
    }
    for (int i = 0; i < 15; i++) {
        if (array[i] % 2 != 0) {
            suma_impares += array[i];
            }
    }
    cout << "La suma de los valores imapares es: " << suma_impares << endl;
}