#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void func(int m,int n,int o ){
if(m==n)cout<<o<<endl;
else if(n==o)cout<<m<<endl;
else cout<<n<<endl;
}
int main() {
    optimize();
int t,a,b,c;
cin>>t;
while(t--){
cin>>a>>b>>c;
func(a,b,c);
}
}
