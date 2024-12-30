#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();

    for(int i=0; i<n-1; i++) {
        int mxcrnt = s[i];
        int mxIdx = i;
        for(int j=i+1; j<= i+9; j++) {
            if (j == n) break;
            int dif = j-i;
            int newVal = s[j] - dif;
            if (newVal > mxcrnt) {
                mxcrnt = newVal;
                mxIdx = j;
            }
        }

        for(int k = mxIdx; k>i; k--) {
            s[k] = s[k-1];
        }
        s[i] = mxcrnt;
    }

    cout<<s<<nl;
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