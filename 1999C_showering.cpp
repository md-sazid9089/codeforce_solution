#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    optimize();
int  n,s,m,p,sl,e;
cin>>n>>s>>m;
bool nl=false;
for(int i=0;i<n;i++){
cin>>sl>>e;
if(sl-p>=s)nl=true;
p=e;
}
if(m-e>=s) cout<<(nl?"YES":"NO")<<endl;
}
