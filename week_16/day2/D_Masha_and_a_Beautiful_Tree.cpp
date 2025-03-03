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
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    int gap = 1, opcnt = 0;

    while(v.size() > 1)
    {
        vector<int> copy;
        bool flag = false;
        for(int i=0; i<v.size()-1; i+=2) {
            if (abs(v[i] - v[i+1]) != gap) {
                flag = true;
            } else {
                if (v[i] > v[i+1]) {
                    opcnt++;
                }
                copy.push_back(min(v[i], v[i+1]));
            }
        }

        if (flag) {
            cout<<-1<<nl;
            return;
        } else {
            gap = (gap<<1);
            v = copy;
        }
    }

    cout<<opcnt<<nl;
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