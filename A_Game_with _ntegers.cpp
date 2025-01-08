#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> a(t);

    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < t; i++) {
        if ((a[i] - 1) % 3 == 0 || (a[i] + 1) % 3 == 0) {
            cout << "first" << endl;
        } else {
            cout << "second" << endl;
        }
    }

    return 0;
}
