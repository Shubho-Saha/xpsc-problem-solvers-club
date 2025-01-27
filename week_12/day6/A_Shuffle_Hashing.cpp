#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string p, h;
    cin>>p>>h;
    multiset<char> pst, hst;
    for(auto c : p) {
        pst.insert(c);
    }
    
    int l = 0, r=0, n=h.size();
    bool flag = false;
    while(r < n)
    {
        hst.insert(h[r]);

        while(hst.size() > pst.size()) {
            auto it = hst.find(h[l]);
            hst.erase(it);
            l++;
        }

        if (hst.size() == pst.size()) {
            if (hst == pst) {
                flag = true;
                break;
            }
        }
        r++;
    }

    if (flag) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
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

// https://codeforces.com/problemset/problem/1278/A