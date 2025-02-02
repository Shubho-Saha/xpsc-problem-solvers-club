#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n;
    cin>>n;
    map<int, int> mp;
    while(n--)
    {
        int l, r;
        cin>>l>>r;
        mp[l]++;
        mp[r]--;
    }

    int sum = 0;
    int ans = 0;
    for(auto [key, val] : mp) {
        sum += val;
        ans = max(ans, sum);
    }

    cout<<ans<<nl;

    return 0;
}

// https://cses.fi/problemset/task/1619/