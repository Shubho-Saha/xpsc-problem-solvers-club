#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, pos = 0;
    string s;
    cin>> n >> s;
    deque<int> v;
    reverse(all(s));

    for(int i=0; i<n; i++) {
        if (s[i] == '0') {
            v.push_back(i-pos);
            pos++;
        }
    }
    
    ll cnt = 0;
    for(int i=0; i<n; i++) {
        if (v.size() == 0) {
            cout<<-1<<" ";
        } else {
            cnt += v.front();
            v.pop_front();
            cout<<cnt<<" ";
        }
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