#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
for(int i=0;i<s.size();i++){
if(s[i]=='y'||s[i]=='s'||s[i]=='e'||s[i]=='Y'||s[i]=='E'||s[i]=='S') {
        cout<<"YES";
break;
}
else cout<<"NO";
}
}
}

