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
    vector<int> v(n);
    for(auto &it : v) {
        cin>>it;
    }

    map<int, int> mp;
    int ans = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            mp[v[i]+v[j]]++;
            ans = max(ans, mp[v[i]+v[j]]);
        }
    }

    cout<<ans;

    return 0;
}