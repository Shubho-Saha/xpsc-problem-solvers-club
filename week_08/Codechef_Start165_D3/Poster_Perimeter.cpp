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
        int n, m, z;
        cin>>n>>m>>z;
        set<int> diff;
        for(int i=1; i<=n; i++) 
        {
            for(int k=1; k<=m; k++)
            {
                // if (k == i) continue;
                int perimeter = 2 * (i + k);
                int d = abs(z - perimeter);
                diff.insert(d);
            }
        }
        int ans = *diff.begin();
        cout<<ans<<nl;
    }

    return 0;
}