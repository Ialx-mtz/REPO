#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Ingresa un numero por favor" << endl;
    cin >> number;

    if (number < 1 || number > 10){
        cout << "Ingresa un numero valido del 1 al 10" << endl;
        return 1;
    }

    cout << "Tabla del " << number << ": " << endl;

    for (int i = 1; i <= 12; i++){
        cout << number << "x" << i << "=" << number * i << endl;
    }


    return 0;
}