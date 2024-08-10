#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    int t, count, total, total2;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        total = 0;
        count =0;
        int temp = x;
        while(temp!=0){
            count++;
            total+=count;
            temp/=10;
        }
       total2=(((x%10)-1)*10 )+total;
        cout << total2<< endl;
    }
    return 0;
}
