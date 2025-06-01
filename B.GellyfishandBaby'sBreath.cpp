#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ui = unsigned int;
using pii = pair<int, int>;
using pil = pair<int, long long>;
using pli = pair<long long, int>;
using pll = pair<long long, long long>;
const int MOD = 998244353;
const ll INF = LLONG_MAX;

vector<ll> pow2 = {1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<ll> p(n), q(n), posP(n), posQ(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            posP[p[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            cin >> q[i];
            posQ[q[i]] = i;
        }
        if ((int)pow2.size() <= n) {
            int oldSize = pow2.size();
            pow2.resize(n + 1);
            for (int i = oldSize; i <= n; i++) {
                pow2[i] = (pow2[i - 1] * 2) % MOD;
            }
        }

        vector<ll> Pmax(n), Qmax(n);
        Pmax[0] = p[0];
        Qmax[0] = q[0];

        for (int i = 1; i < n; i++) {
            Pmax[i] = max(Pmax[i - 1], p[i]);
            Qmax[i] = max(Qmax[i - 1], q[i]);
        }

        vector<ll> r(n);
        for (int i = 0; i < n; i++) {
            int e = max(Pmax[i], Qmax[i]);
            int s;

            if (Pmax[i] > Qmax[i]) {
                int j = posP[e];
                int k = i - j;
                s = q[k];
            } else if (Qmax[i] > Pmax[i]) {
                int k = posQ[e];
                int j = i - k;
                s = p[j];
            } else {
                int j1 = posP[e];
                int k1 = i - j1;
                int s1 = (k1 >= 0 && k1 < n ? q[k1] : -1);

                int k2 = posQ[e];
                int j2 = i - k2;
                int s2 = (j2 >= 0 && j2 < n ? p[j2] : -1);

                s = max(s1, s2);
            }

            r[i] = (pow2[e] + pow2[s]) % MOD;
        }

        for (int i = 0; i < n; i++) {
            cout << r[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
