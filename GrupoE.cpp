#include <iostream>
using namespace std;

int main() {
    int matriz[2][2];
    int suma = 0;


    cout << "Ingrese 4 numeros:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> matriz[i][j];
        }
    }


    cout << "\nMatriz:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
            suma += matriz[i][j];
        }
        cout << endl;
    }


    cout << "\nSuma total: " << suma;

    return 0;
}
