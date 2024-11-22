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

    ll l =0, sum = 0, mxln = 0;

    for(int r=0; r<n;)
    {
        sum += vec[r];
        while(sum > s)
        {
            sum -= vec[l];
            l++;
        }
        
        mxln = max(mxln, (r-l+1));
        r++;
    }

    cout<<mxln;

    return 0;
}