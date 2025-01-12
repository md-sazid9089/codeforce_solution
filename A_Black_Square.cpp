#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum =0;
    string m;
    cin >> m;
for(int i=0; i<m.size(); i++)
    {
        if(m[i]=='1')
        {
            sum+=a;
        }
        else if(m[i]=='2')
        {
            sum+=b;
        }
        else if(m[i]=='3')
        {
            sum+=c;
        }
        else if(m[i]=='4')
        {
            sum+=d;
        }
    }
    cout<<sum<<endl;
    return 0;
}
