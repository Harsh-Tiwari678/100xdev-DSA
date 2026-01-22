#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    cout << N << " + " << M << " = " << N + M << endl << endl;
    cout << N << " - " << M << " = " << N - M << endl << endl ;
    cout << N << " * " << M << " = " << N * M << endl << endl;

    if (M != 0) {
        cout << N << " / " << M << " = " << N / M << endl << endl;
        cout << N << " % " << M << " = " << N % M << endl;
    } else {
        cout << "Division by zero is not allowed" << endl << endl;
        cout << "Modulo by zero is not allowed" << endl << endl;
    }

    return 0;
}
