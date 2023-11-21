#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long n, m, a, f;

    cin >> n >> m >> a;

    f = ceil((double)n / a) * ceil((double)m / a);

    cout << f << endl;

    return 0;
}