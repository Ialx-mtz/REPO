#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Please enter a number " << endl;
    cin >> number;

    if (number%2==0){
        cout << "The number " << number << " is even " << endl;
    }

    else{
        cout << "The number " << number << " is odd " << endl;
    
    }


    return 0;
}