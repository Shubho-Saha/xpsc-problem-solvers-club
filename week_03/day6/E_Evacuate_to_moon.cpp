#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> energyCap(n), powerOutlet(m);
        for (int i = 0; i < n; i++)
            cin >> energyCap[i];
        for (int i = 0; i < m; i++)
            cin >> powerOutlet[i];
        
        ll ans = 0;
        sort(all(energyCap), greater<int>());
        sort(all(powerOutlet), greater<int>());

        for(int i=0; i<min(n, m); i++)
        {
            ll energy = powerOutlet[i] * h;
            (energy > energyCap[i]) ? ans+=energyCap[i] : ans += energy;
        }
        cout<<ans<<nl;
    }

    return 0;
}