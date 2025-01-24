#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n), res(n);
    vector<bool> color(11, false);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        int val = v[i];
        for(int k=0; k<11; k++) {
            if (val % primes[k] == 0) {
                res[i] = primes[k];
                color[k] = true;
                break;
            }
        }
    }
    
    int cnt = 0;
    vector<int> index;
    for(int i=0; i<11; i++) {
        if (color[i]) {
            cnt++;
            index.push_back(primes[i]);
        }
    }

    for(int i=0; i<n; i++) {
        int p = res[i];
        int idx = find(all(index), p) - index.begin();
        res[i] = idx+1;
    }

    cout<<cnt<<nl;
    for(auto x : res) {
        cout<<x<<" ";
    }
    cout<<nl;
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