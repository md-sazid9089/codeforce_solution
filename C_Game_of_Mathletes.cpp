#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
vector<int>b(n);
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    b.push_back(x);
}
int sum=0,count1=0;
for(int i=0;i<(n/2);i++){
    for(int j=i+1;i<(n/2);j++){
        if(b[i]+b[j]==k){
            count1++;
        }
    }
}


}
