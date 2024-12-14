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
    vector<string> vec;

    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        vec.push_back(s);
    }

    vector<int> position(k, 0);
    for(auto s : vec) {
        if (count(all(s), '1') != 1 ) continue;
        
        for(int i=0; i<k; i++) {
            if (s[i] == '1') {
                int idx = k-1 - i;
                position[idx] = 1;
                break;
            }
        }
    }
    

    for(int i=0; i<k; i++) {
        if (position[i] == 0) {
            cout<<"NO"<<nl;
            return;
        }
    }
    cout<<"YES"<<nl;
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