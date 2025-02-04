#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int k, n, m;
    cin>>k>>n>>m;
    deque<int> mono(n), poly(m), res;
    for(int i=0; i<n; i++) {
        cin>>mono[i];
    }
    for(int i=0; i<m; i++) {
        cin>>poly[i];
    }

    int crntsz = k;
    while(true)
    {
        bool flag = true;
        while(!mono.empty() && (mono.front()==0 || mono.front() <= crntsz))
        {
            int val = mono.front();
            res.push_back(val);
            mono.pop_front();
            if (val == 0) crntsz++;
            flag = false;
        }

        while(!poly.empty() && (poly.front()==0 || poly.front() <= crntsz))
        {
            int val = poly.front();
            res.push_back(val);
            poly.pop_front();
            if (val == 0) crntsz++;
            flag = false;
        }

        if (flag) break;
    }

    if (res.size() != n+m) {
        cout<<-1<<nl;
    } else {
        for(auto x : res) {
            cout<<x<<" ";
        }
        cout<<nl;
    }
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

// https://codeforces.com/problemset/problem/1547/C