#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int count1 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                count1++;
            }
        }
        cout << count1 << endl;
}
return 0;
}
