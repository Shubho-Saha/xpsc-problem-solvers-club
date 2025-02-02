#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for(auto &a : v) {
        cin>>a;
    }

    vector<int> prefix(n+1, 0);
    while(q--)
    {
        int f, l, x;
        cin>>f>>l>>x;
        f--;
        prefix[f] += x;
        prefix[l] -= x;
    }

    ll prev = 0;
    for(auto &crnt : prefix) {
        crnt += prev;
        prev = crnt;
    }

    for(int i=0; i<n; i++) {
        v[i] = v[i] + prefix[i];
    }

    for(auto x : v) {
        cout<<x<<" ";
    }

    return 0;
}