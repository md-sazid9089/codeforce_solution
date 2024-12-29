#include <bits/stdc++.h>
using namespace std;
void work(long long x) {
    long long j = 1;
    while (x > 3) {
        j *= 2;
        x /= 4;
    }
    cout << j << endl;
}

int main() {
    int t;
    cin >> t;
    vector<long long> v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < t; i++) {
        work(v[i]);
    }

    return 0;
}
