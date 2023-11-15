#include <iostream>
using namespace std;

int main() {
    int n, petya, vasya, tonya, p = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> petya >> vasya >> tonya;

        if ((petya + vasya + tonya) >= 2) p++;
    }

    cout << p;

    return 0;
}