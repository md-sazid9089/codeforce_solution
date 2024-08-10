#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << (count(s.begin(), s.end(), 'A') > count(s.begin(), s.end(), 'B') ? "A" : "B") << endl;
    }
    return 0;
}
