#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, s;

    cin >> t;

    for (int i = 0; i < t; i++) {
        s = 0;

        cin >> n;

        int a[2 * n];

        for (int j = 0; j < 2 * n; j++) cin >> a[j];

        sort(a, a + (2 * n));

        for (int j = 1; j < n; j++) s += abs(a[j] - a[j - 1]);
        for (int j = n + 1; j < 2 * n; j++) s += abs(a[j] - a[j - 1]);

        cout << endl << s << endl;

        int x = n;
        for (int j = 0; j < n; j++) cout << a[j] << " " << a[x++] << endl;
    }

    return 0;
}