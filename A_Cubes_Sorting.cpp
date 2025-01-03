#include<bits/stdc++.h>
using namespace std;
void binary(vector<int> &a,int &b){
      bool iswap=false;
for(int i=1;i<b;i++){
    if(a[i-1]<=a[i]){
        iswap=true;
    break;
    }
}

if(iswap){
        cout<<"YES"<<endl;
}
        else
        {
            cout<<"NO"<<endl;
        }

}


int main(){

 int t;
 cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>k;

    for(int i=0;i<n;i++){
    int x;
    cin>>x;
    k.push_back(x);

    }
    binary(k,n);
}






}
