#include <iostream>
using namespace std;

int main(){
    int numbers[5];

    for (int i = 0; i < 5; i++){
        cout << "Ingresa 5 numeros " << i + 1 << ": " << endl;
        cin >> numbers[i];
    }

    cout << "Los numeros ingresados son: " << endl;
    for (int i = 0; i < 5; i++){
        cout << numbers[i] << " " << endl;
    }

    return 0;
}