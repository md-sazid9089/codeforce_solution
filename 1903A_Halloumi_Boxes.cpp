#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int flag=0;
        if(k==1){
            for(int i=1;i<n;i++){
                if(vec[i-1]>vec[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
        
    }
}
