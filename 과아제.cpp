#include <iostream>
#include <string>
using namespace std;

void power(double a, int b) {
    double result = 1.0;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    cout << a << ", " << b << '=' << result << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cout << "두 수 입력: ";
    cin >> a >> b;

    power(a,b);

    return 0;
}


