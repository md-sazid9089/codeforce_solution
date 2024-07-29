#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string result = (n<1400)?"Division 4":((n>=1400 && n<1600)?"Division 3":((n>=1600 && n<1900)?"Division 2":"Division 1"));
        cout << result << endl;
    }
    return 0;
}
