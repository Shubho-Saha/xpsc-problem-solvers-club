#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n, s;
    cin>>n>>s;

    vector<ll> vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    ll l=0, sum=0, minln = INT_MAX;

    for(ll r = 0; r < n;)
    {
        sum += vec[r];

        while(sum >= s)
        {
            minln = min(minln, (r-l+1));
            sum -= vec[l];
            l++;
        }
        r++;
    }

    if (minln == INT_MAX)
    {
        cout<<-1;
    } else {
        cout<<minln;
    }

    return 0;
}