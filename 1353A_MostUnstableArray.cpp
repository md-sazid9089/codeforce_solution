#include<bits/stdc++.h>
using namespace std;
void solve() 
{
    int n , k ;
    cin >> n >> k ;
    if( n == 1 )
    {
        cout << 0 << endl ;
    }
    else if ( n == 2)
    {
        cout << k << endl ;
    }
    else 
    {
        cout << 2*k << endl ;
    }
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
 
    return 0;
}
