#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    optimize();
long long int n;
cin>>n;
if(n%2==0) cout<<n/2;
else cout<<(-n/2-1);
return 0;
}
