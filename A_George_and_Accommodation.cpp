#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    optimize();
    int t, k = 0, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (b >= a+2) {
            k++;
        }
    }
    cout << k;
    return 0;
}
