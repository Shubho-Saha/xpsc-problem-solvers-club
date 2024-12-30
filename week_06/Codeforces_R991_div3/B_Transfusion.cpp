#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> vec(n);

    ll sum = 0;

    for(int i=0; i<n; i++) {
        cin>>vec[i];
        sum += vec[i];
    }

    if (sum % n != 0) {
        cout<<"NO"<<nl;
        return;
    }

    ll avg = sum / n;
    ll sum1 = 0, sum2 = 0;
    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<n; i++) {
        if (i % 2 == 0) {
            sum1 += vec[i];
            cnt1++;
        } else {
            sum2 += vec[i];
            cnt2++;
        }
    }

    if ((sum1 % cnt1 == 0) && (sum1/cnt1)==avg) {
        if ((sum2 % cnt2 == 0) && (sum2/cnt2) == avg) {
            cout<<"YES"<<nl;
            return;
        }
    }
    cout<<"NO"<<nl;

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