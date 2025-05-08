#include <iostream>

using namespace std;

int main(){
    int note;
    string rating;

    cout << "Ingresa un numero del 0 al 100 para mostrar el equivalente en letras" << endl;
    cin >> note;

    switch(note){

        case 1:
        if (note >= 0 && note <= 20){
            rating = "F";
        } else if (note >= 21 && note <= 40){
            rating = "D";
        } else if (note >= 41 && note <= 60){
            rating = "C";
        } else if (note >= 61 && note <= 80){
            rating = "B";
        } else if (note >= 81 && note <= 100){
            rating = "A";
        } break;

        cout << "Tu calificacion en base a los datos que ingresaste es: " << rating << endl;

    }

    return 0;
}