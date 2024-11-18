#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int zero = 0;
    int zeroIdx = -1;
    int one = 0;
    int oneIdx = -1;

    for(int i=0; i<n; i++) {
        if (s[i] == '1' && oneIdx == -1) {
            one++;
            oneIdx = i;
        }
        if (s[i] == '0' && oneIdx != -1) {
            oneIdx = -1;
        }

        if (s[i] == '0' && zeroIdx == -1) {
            zero++;
            zeroIdx = i;
        }
        if (s[i] == '1' && zeroIdx != -1) {
            zeroIdx = -1;
        }
    }
    cout<<min(one, zero)<<nl;
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