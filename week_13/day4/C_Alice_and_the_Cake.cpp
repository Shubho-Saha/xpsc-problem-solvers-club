#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    ll sum = 0;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        sum += x;
        mp[x]++;
    }

    if (n==1) {
        cout<<"YES"<<nl;
        return;
    }

    priority_queue<ll> pq;
    pq.push(sum);

    while(pq.size() < n)
    {
        ll og = pq.top();
        pq.pop();

        ll first = og/2, second = (og+1)/2;
        if (mp.count(first) == 0) {
            pq.push(first);
        } else {
            mp[first]--;
            n--;
        }
        if (mp[first] == 0) mp.erase(first);

        if (mp.count(second) == 0) {
            pq.push(second);
        } else {
            mp[second]--;
            n--;
        }
        if (mp[second] == 0) mp.erase(second);
    }

    if (mp.size() == 0) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// https://codeforces.com/contest/1654/problem/C