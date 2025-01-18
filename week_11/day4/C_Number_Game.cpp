#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int closestToLeft(vector<int> &v, int target) {
    int l=-1, r=v.size(), mid;
    while(r-l>1)
    {
        mid = l + (r-l)/2;
        if (v[mid] <= target) {
            l = mid;
        } else {
            r = mid;
        }
    }

    return l;
}
void solve()
{
    int n; 
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v));

    auto isOk = [&](int k) {
        if (k==0) return true;
        vector<int> copy = v;
        int tmp = k, aliceNeed = k, cnt=0;
        while(tmp--)
        {
            int idx = closestToLeft(copy, aliceNeed);
            if (idx == -1) break;
            cnt++;
            copy[idx] += aliceNeed;
            copy[0] += aliceNeed;
            aliceNeed--;
            sort(all(copy));
        }

        return cnt >= k;
        
    };

    int l = 0, r = 101, mid;
    while(r-l>1)
    {
        mid = l + (r-l)/2;
        if (isOk(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout<<l<<nl;
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