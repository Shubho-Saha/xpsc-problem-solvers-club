#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n, target;
    cin>>n>>target;

    vector<ll> vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    ll l = 0, sum = 0, ans = 0;

    for(int r=0; r<n;)
    {
        sum += vec[r];

        while(sum >= target)
        {
            ans += n-r;
            sum -= vec[l];
            l++;
        }
        r++;
    }

    cout<<ans;

    return 0;
}