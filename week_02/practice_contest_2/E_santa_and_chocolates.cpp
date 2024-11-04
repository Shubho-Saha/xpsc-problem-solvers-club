#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    int total = 0;

    vector<int> vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
        total += vec[i];
    }

    if (k==0) {
        if (total == 0) {
            cout<<"no"<<nl;
            return;
        }
        if (total % n == 0) {
            cout<<"yes"<<nl;
        } else {
            cout<<"no"<<nl;
        }
    } else {
        if (total >= n) {
            cout<<"yes"<<nl;
        } else {
            cout<<"no"<<nl;
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