#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;

        ll atime= a - 1;
        ll btime = 0;

        if ( c > b) {
            btime = (c-b) + (c-1);
        } else {
            btime = b - 1;
        }

        if (atime < btime) {
            cout<<1<<nl;
        } else if (btime < atime) {
            cout<<2<<nl;
        } else {
            cout<<3<<nl;
        }


    }

    return 0;
}