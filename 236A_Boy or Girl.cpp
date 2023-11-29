#include <iostream>
using namespace std;

int main() {
    string name;
    int n = 0;
    bool check;

    cin >> name;

    for (int i = 0; i < name.length(); i++) {
        check = true;
        for (int j = i + 1; j < name.length(); j++) {
            if (name[i] == name[j]) check = false;
        }
        if (check == true) n++;
    }

    if ((n % 2) == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}