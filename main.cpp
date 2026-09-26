#include <iostream>
#include <string>
using namespace std;

int leerEntero(const string& mensaje) {
    int numero;
    cout << mensaje;
    cin >> numero;
    return numero;
}

int main() {
    const int CANTIDAD = 5;
    int pares[CANTIDAD];   // en el peor caso, todos son pares
    int totalPares = 0;    // contador de pares

    cout << "Guardar los numeros pares de " << CANTIDAD << " numeros\n";

    for (int i = 0; i < CANTIDAD; i++) {
        int numero = leerEntero("Ingresa un numero: ");

        if (numero % 2 == 0) {
            pares[totalPares] = numero;
            totalPares++;
        } else {
            cout << "Numero invalido (no es par)\n";
        }
    }

    cout << "\nSe guardaron " << totalPares << " numeros pares:\n";
    for (int i = 0; i < totalPares; i++) {
        cout << pares[i] << " ";
    }
    cout << endl;

    return 0;
}