#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool sorted(vector<int> &v, int l, int r)
{
    for(int i=l; i<r; i++) {
        if (v[i] > v[i+1]) return false; 
    }
    return true;
}

void no() {
    cout<<"NO"<<nl;
}
void yes() {
    cout<<"YES"<<nl;
}

void solve() 
{
    int n; 
    cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }

    int limit = ceil(log2(n)*1.0);
    for(int i=1; i<=limit; i++) {
        int l = (1<<(i-1))+1;
        int r = (1<<i);
        r = (r > n) ? n : r;
        if (!sorted(v, l, r)) {
            no();
            return;
        }
    }
    yes();

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