#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n), res(n);
    set<int> st;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        st.insert(v[i]);
    }

    if (n==1) {
        cout<<-1<<nl;
        return;
    }

    bool flag = false;
    if (v[n-1] == n ) {
        res[n-2] = n;
        st.erase(n);
        flag = true;
    }

    for(int i=0; i<n; i++) 
    {
        if (flag && i==n-2) {
            continue;
        } 
        auto it = st.begin();
        if (*it == v[i]) {
            ++it;
        } 
        int val = *it;
        res[i] = val;
        st.erase(val);
    }

    for(auto x: res) {
        cout<<x<<" ";
    }
    cout<<nl;

}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1689/B