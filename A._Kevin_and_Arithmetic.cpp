#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long even=0,odd=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0)even++;
    }odd=n-even;
    if(even>0)cout<<odd+1<<endl;
    else cout<<odd-1<<endl;

    }
return 0;
}
