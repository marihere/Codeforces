#include <iostream>
using namespace std;

int main() {
    string w;

    cin >> w;

    if (w[0] > 91) w[0] -= 32;

    cout << w << endl;
}