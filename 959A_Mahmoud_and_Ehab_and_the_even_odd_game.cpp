#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    optimize();
int n;
cin>>n;
string result=((n-2)%2)?"Mahmoud":"Ehab";
cout<<result<<endl;
}
