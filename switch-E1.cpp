#include <iostream>

using namespace std;

int main(){
    int dayNumber;
    string dayName;

    cout << "===================================================" << endl;
    cout << "              DIAS DE LA SEMANA" << endl;
    cout << "===================================================" << endl;
    cout << "Ingrese un numero correspondiente a un dia de la semana" << endl;
    cin >> dayNumber;

    switch(dayNumber){
        
        case 1:
        dayName = "Lunes";
        break;

        case 2:
        dayName = "Martes";
        break;

        case 3:
        dayName = "Miercoles";
        break;

        case 4:
        dayName = "Jueves";
        
        case 5:
        dayName = "Viernes";
        break;

        case 6:
        dayName = "Sabado";

        case 7:
        dayName = "Domingo";

        default:
        dayName = "El numero que ingresaste no corresponde a ningun dia de la semana";
        break;
        return 1;
    }

    cout << "===================================================" << endl;
    cout << "El dia de la semana que seleccionaste es: " << dayName << endl;
    cout << "===================================================" << endl;

    return 0;
}