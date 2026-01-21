#include<iostream>
using namespace std;

int main () {
    int num1, num2;
    cin >> num1 >> num2;   // 1️⃣ Pehle input

    int add = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;

    // Division aur modulo tab hi jab num2 != 0
    int div = 0, mod = 0;
    if(num2 != 0){
        div = num1 / num2;
        mod = num1 % num2;
    }

    cout << num1 << " + " << num2 << " = " << add << endl;
    cout << num1 << " - " << num2 << " = " << sub << endl;
    cout << num1 << " * " << num2 << " = " << mul << endl;

    if(num2 != 0){
        cout << num1 << " / " << num2 << " = " << div << endl;
        cout << num1 << " % " << num2 << " = " << mod << endl;
    } else {
        cout << "Division and Modulo not possible (division by zero)" << endl;
    }

    return 0;
}
