#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<ll> odd, even;
    for(int i=0; i<n; i++) {
        ll x;
        cin>>x;
        if (x % 2 == 0) {
            even.push_back(x);
        } else {
            odd.push_back(x);
        }
    }

    if (odd.size() == n || even.size() == n) {
        cout<<0<<nl;
        return;
    }

    sort(all(odd));
    sort(all(even));

    int evencnt = even.size();

    if (odd.back() > even.back()) {
        cout<<evencnt<<nl;
    }  else {
        if (even.front() > odd.back()) {
            cout<<evencnt+1<<nl;
        } else {
            ll oddMost = odd.back();
            bool flag = false;
            for(int i=0; i<even.size(); i++) {
                if (oddMost > even[i]) {
                    oddMost += even[i];
                } else {
                    flag = true;
                    break;
                }            
            }
            if(flag) {
                cout<<evencnt+1<<nl;
            } else {
                cout<<evencnt<<nl;
            }
            
        }
    }
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}