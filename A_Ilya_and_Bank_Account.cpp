#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] == '-') {
        // Determine which digit to remove for the minimal value
        int n = s.size();
        if (s[n - 1] > s[n - 2]) {
            s[n - 2] = s[n - 1]; // Replace the second last character with the last character
        }
        s.pop_back(); // Remove the last character

        // Handle the special case of "-0"
        if (s == "-0") s = "0";
    }

    cout << s << endl;

    return 0;
}
