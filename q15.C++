#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int mn, mx;

    // Find minimum
    if (A <= B && A <= C)
        mn = A;
    else if (B <= A && B <= C)
        mn = B;
    else
        mn = C;

    // Find maximum
    if (A >= B && A >= C)
        mx = A;
    else if (B >= A && B >= C)
        mx = B;
    else
        mx = C;

    cout << "Min = " << mn << endl;
    cout << "Max = " << mx << endl;

    return 0;
}
