#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n, k;
    cin>>n>>k;

    vector<ll> vec(n);
    for(ll i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    map<ll, ll> mp;
    ll l=0, result = 0;

    for(ll r=0; r<n; r++)
    {
        mp[vec[r]]++;

        while((mp.rbegin()->first - mp.begin()->first) > k) {
            ll key = vec[l];
            mp[key]--;
            if (mp[key] == 0) {
                mp.erase(key);
            }
            l++;
        }

        result += r-l+1;
    }

    cout<<result;

    return 0;
}