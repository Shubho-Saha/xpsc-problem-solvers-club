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
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> neg, pos;
        bool isZero = false;
        for(int i=0; i<n; i++) {
            ll x;
            cin>>x;
            if (x > 0) {
                pos.push_back(x);
            } else if (x < 0) {
                neg.push_back(x);
            } else {
                isZero = true;
            }
            
        }

        if (isZero || neg.size()%2 == 0) {
            ll ans = 0;
            for(int i=0; i<pos.size(); i++) {
                ans += pos[i];
            }
            for(int i=0; i<neg.size(); i++) {
                ans += -neg[i];
            }
            cout<<ans<<nl;
        } else {
            sort(all(pos));
            sort(all(neg));
            ll ans = 0;
            if (pos.size() == 0) {
                for(int i=0; i<neg.size()-1; i++) {
                    ans += -neg[i];
                }
                ans += neg[neg.size()-1];
                cout<<ans<<nl;
            } else {
                int a = abs(neg.back());
                int b = pos[0];
                if (a >= b) {
                    pos[0] *= -1;
                    for(int i=0; i<neg.size(); i++) {
                        ans += -neg[i];
                    }
                    for (auto x : pos) {
                        ans += x;
                    }
                    cout<<ans<<nl;
                } else {
                    for(int i=0; i<neg.size()-1; i++) {
                        ans += -neg[i];
                    }
                    ans += neg[neg.size()-1];
                    for(auto x : pos) {
                        ans += x;
                    }
                    cout<<ans<<nl;
                }
            }
        }
    }

    return 0;
}