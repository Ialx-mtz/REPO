#include <iostream>

using namespace std;

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age>=0 and age<18){
        cout << "You are a minor." << endl;
    }

    else{
        cout << "You are an adult." << endl;
    }


    return 0;
}