#include <iostream>
using namespace std;

int main(){
    int N, suma = 0;

    cout << "Por favor ingresa un numero entero positivo" << endl;
    cin >> N;

    if (N < 1){
        cout << "Tienes que ingresar un numero positivo" << endl;
        return 1;
    }

    for (int i = 1; i <= N; i++){
        suma += i;
    }

    cout << "La suma de los numeros del 1 al " << N << "es: " << suma << endl;


    return 0;
}