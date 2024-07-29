#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cout.unsetf(ios::floatfield), cout.precision(10), cout.setf(ios::fixed, ios::floatfield);
using namespace std;

int main() {
    optimize();
int n;
cin>>n;
string p;
cin>>p;
string q;
cin>>q;
for(int i=0;i<p.length();i++){
for(int j=0;j<q.length();j++){
if(p[i]==n || q[i]==n){
 cout<<"I become the guy.";
break;
}
cout<<"Oh, my keyboard!";
}
}
return 0;
}
