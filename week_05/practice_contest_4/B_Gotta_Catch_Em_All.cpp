#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, x, y;
    cin>>n>>x>>y;

    int result = 0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if ((x*a) <= y) {
            result += (x*a);
        } else{
            result += y;
        }
    }

    cout<<result<<nl;

}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}