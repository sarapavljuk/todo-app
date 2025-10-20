#include <iostream>
using namespace std;

int main() {

    cout << "C++ calculator" << endl;
    cout << "Nova funkcionalnost v feature veji" << endl;
    char oper;
    double num1, num2;
    
    cout << "=== ENOSTAVEN KALKULATOR ===" << endl;
    cout << "Vnesite operator (+, -, *, /): ";
    cin >> oper;
    
    cout << "Vnesite prvo stevilo: ";
    cin >> num1;
    
    cout << "Vnesite drugo stevilo: ";
    cin >> num2;
    
    cout << endl << "REZULTAT: ";
    
    switch(oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Napaka: Deljenje z nic!";
            break;
        default:
            cout << "Napaka: Nepravilen operator!";
    }
    
    cout << endl;
    return 0;
}