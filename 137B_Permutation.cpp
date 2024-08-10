#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    optimize();
    int n,a=0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    //int st = unique(v.begin(), v.end()) - v.begin();
    //cout<<st;
    //for(int i = 0; i < st; i++){
      //  cout << v[i] << endl;
    //}
    for(int i=0;i<v.size();i++){
        if(v[i]>n)a++;
        else if(v[i]==v[i+1])a++;
    }
    cout<<a<<endl;
    return 0;
}
