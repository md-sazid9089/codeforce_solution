#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
string s;
cin>>s;
int count1=0;
string s1="codeforces";
for(int i=0;i<s.size();i++){
if(s[i]!=s1[i]){
count1++;
}

}

cout<<count1<<endl;
}


}
