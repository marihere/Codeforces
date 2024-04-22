#include <iostream>
using namespace std;

int main() {
    int y, w, a, b = 6;

    cin >> y >> w;

    a = (6 - max(y, w)) + 1;
    
    for (int i = 1; i <= 6; i++) {
        if (a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
        }
    }

    cout << a << "/" << b << endl;
    
    return 0;
}