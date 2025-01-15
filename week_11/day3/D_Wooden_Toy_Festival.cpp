#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        sort(all(v));

        auto isGood = [&](int time) {
            int cnt = 1;
            int l=0, r=0;
            for(int r=0; r<n; r++) {
                if ((v[r] - v[l]) > (2*time)) {
                    cnt++;
                    l = r;
                }
            }

            return cnt <= 3;
        };

        int l=-1, r=1e9, mid;
        while(r > l+1)
        {
            mid = l + (r-l)/2;
            if (isGood(mid)) {
                r = mid;
            } else {
                l = mid;
            }
        }

        cout<<r<<nl;
    }

    return 0;
}