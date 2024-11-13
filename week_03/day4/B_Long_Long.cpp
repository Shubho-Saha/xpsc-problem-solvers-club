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
        int n;
        cin>>n;
        vector<ll> vec(n);
        ll ans = 0;
        int idx = -1;
        int count = 0;
        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
            ans += abs(vec[i]);

            if (vec[i] < 0 && idx == -1) {
                idx = i;
            }
            if (vec[i] > 0 && idx != -1) {
                count++;
                idx = -1;
            }
        }
        if (idx != -1) {
            count++;
        }
        cout<<ans<<" "<<count<<nl;

    }

    return 0;
}