#include <iostream>
using namespace std;

int main(){

    cout << "Numeros del 1 al 100 divisibles entre 3 y 5 (multiplos de 15)" << endl;

    for (int i = 1; i <= 100; i++){
        if (i % 3 == 0 && i % 5 == 0){
            cout << i << " " << endl;
        }
            
    }


    return 0;
}