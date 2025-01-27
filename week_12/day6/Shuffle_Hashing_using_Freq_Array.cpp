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
    vector<int> pfre(26), hfre(26);
    for(auto c : p) {
        pfre[c-'a']++;
    }

    bool flag = false;
    int l = 0, n = p.size();
    for(int r=0; r<h.size(); r++) {
        hfre[h[r]-'a']++;
        if (r - l >= n) {
            hfre[h[l]-'a']--;
            l++;
        }
        if (r-l == n-1) {
            if (hfre == pfre) {
                flag = true;
                break;
            }
        }
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