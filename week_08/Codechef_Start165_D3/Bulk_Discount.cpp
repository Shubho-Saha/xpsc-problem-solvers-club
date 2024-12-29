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
        ll n;
        cin>>n;
        vector<ll> vec(n);
        for(int i=0; i<n; i++) {
            cin>>vec[i];
        } 
        sort(all(vec));
        ll cost = 0;
        for(ll i=0; i<n; i++)
        {
            ll itemCost = vec[i] - i;
            if (itemCost < 0) {
                itemCost = 0;
            }
            cost += itemCost;
        }

        cout<<cost<<nl;
        
    }

    return 0;
}