#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
    string s;
    cin >> s;

    bool hasUppercase = false;
    for (char c : s) {
        if (isupper(c)) {
            hasUppercase = true;
            break;
        }
    }

    if (hasUppercase) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
