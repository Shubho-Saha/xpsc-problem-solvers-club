#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        int ln = s.size();
        vec.push_back(ln);
    }

    // sort(all(vec));
    int sum = 0;
    int cnt = 0;
    for(int i=0; i<n; i++) {
        sum += vec[i];
        if (sum <= m) {
            cnt++;
        } else {
            break;
        }
    }
    cout<<cnt<<nl;
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