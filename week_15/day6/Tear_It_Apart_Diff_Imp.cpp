#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();

    int mnDis = 2e5+10;
    for(char ch = 'a'; ch <= 'z'; ch++) {
        int ln = 0, mx = 0;
        for(auto c : s) {
            if (c != ch) {
                ln++;
                mx = max(mx, ln);
            } else {
                ln = 0;
            }
        }
        mnDis = min(mnDis, mx);
    } 

    int res = 0;
    while(mnDis != 0) {
        mnDis = mnDis / 2;
        res++;
    }
    cout<<res<<nl;
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