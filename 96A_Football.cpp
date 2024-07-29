#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    optimize();
    string s;
    cin >> s;
    int count = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= 7) {
                cout << "YES";
                return 0;
            }
        } else {
            count = 1;
        }
    }
    cout << "NO";
    return 0;
}
