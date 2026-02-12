//CALCULATOR 
#include <iostream>
#include <string>
using namespace std;

int main(){
    double a, b;
    string calc;
    cout << "Number 1: ";
    cin >> a;
    cout << "Enter Operation (+, -, *, /, <<, >>): ";
    cin >> calc;
    cout << "Number 2: ";
    cin >> b;

    double result;
    bool isValid = true;

    if(calc == "+"){
        result = a + b;
    }
    else if(calc == "-"){
        result = a - b;
    }
    else if(calc == "*"){
        result = a * b;
    }
    else if(calc == "/"){
        if(b != 0){
            result = a / b;
        } else {
            cout << "Division by zero" << endl;
            return 1;
        }
    }
    else if(calc == "<<"){
        result = (int)a << (int)b;
    }
    else if(calc == ">>"){
        result = (int)a >> (int)b;
    }
    else {
        cout << "Invalid operator" << endl;
        isValid = false;
    }

    if(isValid){
        cout << "Result: " << result << endl;
    }
    return 0;
}

