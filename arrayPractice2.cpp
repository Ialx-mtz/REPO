#include <iostream>
using namespace std;

int main(){
    int numbers[5];
    int suma = 1;

    for (int i = 0; i < 5; i++){
        cout << "Ingresa 5 numeros " << i + 1 << ": " << endl;
        cin >> numbers[i];
    }
    
    for (int i = 0; i < 5; i++){
         suma += i;
    }

    cout << "La suma de los numeros que ingresaste es: " << suma << endl;
    

    return 0;
}