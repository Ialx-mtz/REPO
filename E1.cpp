#include <iostream>

using namespace std;

int main(){
    int kw;

    cout << "Ingresa tu consumo de kWh para brindarte tu tarifa " << endl;
    cin >> kw;

    if (kw >= 0 && kw <= 100)
    {
        cout << "Tu tarifa a pagar es $50.00 dolares" << endl;

    } else if (kw >= 101 && kw <= 200)
    {
        cout << "Tu tarifa a pagar es $125.00 dolares" << endl;

    } else if (kw > 200)
    {
        cout << "Tu tarifa a pagar es $275.00 dolares" << endl;

    } else
    {
        cout << "Por favor ingresa una cantidad de consumo valida" << endl;
    }
    
    
    
    


    return 0;
}


