#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    optimize();
    int t;
    cin >> t;
    int arr[t], arr2[t], arr3[t];

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
        if (arr[i] % 3 == 0 || (arr[i]/10==3)) {
            arr2[i] = arr[i];
        } else {
            arr3[i] = arr[i];
        }
    }

    for (int i = 0; i < t; i++) {
        cout << arr3[i] << endl;
    }

    return 0;
}
