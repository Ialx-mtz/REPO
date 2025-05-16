#include <iostream>
using namespace std;

int main (){
    int a, factorial = 1;

    cout << "Ingresa un numero entero positivo" << endl;
    cin >> a;

    if (a < 1){
        cout << "Ingresa un numero positivo" << endl;
        return 1;
    }

    for (int i = a; i >= 1; i--){
        factorial *= i;
    }

    cout << "El resultado del factorial de " << a << " es: " << factorial << endl;

    return 0;
}