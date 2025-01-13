#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int x;
    cin>>x;

    int lastbit = __lg(x);
    int b = 1 << lastbit;
    int a = b ^ x;

    int lastbits = __lg(a);

    int zerocnt = 0;
    for(int i=0; i<=lastbits; i++) {
        if (((a>>i)&1) || ((b>>i)&1)) continue;
        zerocnt++;
    }
    
    cout<<(1<<zerocnt)<<nl;
    
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}