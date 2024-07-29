#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cout.unsetf(ios::floatfield), cout.precision(10), cout.setf(ios::fixed, ios::floatfield);
using namespace std;

int main() {
    optimize();
    string s, l;
    cin >> s;
    int i=0,j=0;

    for (char c : s) {
    if(c>='A' && c<='Z') i++;
    else j++;
    }
    for(char a:s){
        if(i>j) l+= toupper(a);
        else   l+= tolower(a);
    }

    cout << l;
    return 0;
}
