#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    string t, p;
    cin>>t>>p;
    int n = t.size();
    vector<int> v(n);
    vector<bool> removed(n, false);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    auto ok = [&](int dltCnt) {
        if (dltCnt == 0) return true;
        for(int i=0; i<dltCnt; i++) {
            int idx = v[i];
            removed[idx-1] = true;
        }
        int k = 0;
        for(int i=0; i<n; i++) 
        {
            if (removed[i]) continue;
            if (t[i] == p[k]) {
                k++;
            }
        }
        if (k == p.size()) {
            return true;
        } else {
            return false;
        }
    };

    int l=0, r=n, mid;

    while(r > l+1) {
        fill(all(removed), false);
        mid = l + (r-l)/2;
        if (ok(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout<<l;


    return 0;
}