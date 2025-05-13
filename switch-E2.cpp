#include <iostream>

using namespace std;

int main(){
    int note;
    string rating;

    cout << "Ingresa un numero del 0 al 100 para mostrar el equivalente en letras" << endl;
    cin >> note;

    switch(note){

        case 1:
        if (note >= 0 && note <= 69){
            rating = "F";
        } else if (note >= 70 && note <= 79){
            rating = "D";
        } else if (note >= 80 && note <= 84){
            rating = "C";
        } else if (note >= 85 && note <= 89){
            rating = "B";
        } else if (note >= 90){
            rating = "A";
        }else if (note = 69){
            rating = "E";
        } default:
            rating = "El numero que seleccionaste no es valido para entregarte tu calificacion";
            return 1;
          break;
    }

    cout << "Tu calificacion en base al numero que ingresaste es: " << rating << endl;

    return 0;
}