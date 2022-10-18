// Unidades.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{

    int n, d, u, de, c, um, dm, d1, c1, um1, dm1;
    cout << "Escirbe Un Numero:\n";
    cin >> n;

    if (n > 100000) {
        cout << "El numero es mayor a 100,000";
    }
    else {
        if (n >= 100000) {
            cout << "El numero tiene 6 digitos\n";
        }
        else {
            if (n >= 10000) {
                cout << "El numero tiene 5 digitos\n";
            }
            else {
                if (n >= 1000) {
                    cout << "El numero tiene 4 digitos\n";
                }
                else {
                    if (n >= 100) {
                        cout << "El numero tiene 3 digitos\n";
                    }
                    else {
                        if (n >= 10) {
                            cout << "El numero tiene 2 digitos\n";
                        }
                        else {
                            if (n >= 10) {
                                cout << "El numero tiene 1 digitos\n";
                            }
                        }
                    }
                }
            }
        }

      u = n % 10;
      cout  << "Unidades:" << u << "\n";

      d1 = n - u;
      de = d1 % 100 / 10;
      cout << "Decenas:" << de << "\n";

      c = n % 1000 / 100;
      cout << "Centenas:" << c << "\n";


      um = n % 10000 / 1000;
      cout  << "Unidades De Millar:" << um << "\n";


      dm = n % 100000 / 10000;
      cout << "Decenas De Millar:" << dm << "\n";
    }
}