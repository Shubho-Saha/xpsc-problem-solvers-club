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
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<q; i++) {
        int key; cin>>key;
        int l=0, r=n-1;
        int ans = -1;
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if (v[mid] <= key) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid -1;
            }

        }

        cout<<ans+1<<nl;
    }

    return 0;
}