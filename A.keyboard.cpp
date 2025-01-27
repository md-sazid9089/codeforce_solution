#include <bits/stdc++.h>
using namespace std;

string solve(char c, string a) {
    string b = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int shift = (c == 'R') ? -1 : 1;
    string result = "";

    for (char ch : a) {
        int pos = b.find(ch);
        result += b[pos + shift];
    }
    return result;
}

int main() {
    char c;
    cin >> c;
    string s;
    cin >> s;
    cout << solve(c, s) << endl;
    return 0;
}
