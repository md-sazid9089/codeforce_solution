#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    int mcount = 0, ccount = 0;

    while (tc--) {
        int m, c;
        cin >> m >> c;
        mcount += (m > c) ? 1 : 0;
        ccount += (m < c) ? 1 : 0;
         }
    cout << (mcount > ccount ? "Mishka" : (ccount > mcount ? "Chris" : "Friendship is magic!^^")) << endl;

    return 0;
}
