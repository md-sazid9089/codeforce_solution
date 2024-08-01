#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int maxt=0;
        string maxS;
        for (char c='a';c <='z';c++) {
            for (int i = 0; i <= s.size(); i++) {
                string temp = s;
                temp.insert(i, 1, c);
                int time = 2;
                for (int j = 1; j < temp.size(); j++) {
                    if (temp[j] == temp[j - 1]) {
                        time += 1;
                    } else {
                        time += 2;
                    }
                }
                if (time>maxt) {
                    maxt=time;
                    maxS=temp;
                }
            }
        }
 
        cout<<maxS<<endl;
    }
 
    return 0;
}
