#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
const int N = 1e4+5;
vector<int> dp(N, -1);

bool func(int n)
{
    if (n == 0) {
        return true;
    } else if (n < 0) {
        return false;
    }
    if (dp[n] != -1) {
        return dp[n];
    }

    bool op1 = func(n-3);
    bool op2 = func(n-4);
    dp[n] = (op1 || op2);
    return (op1 || op2);
}
void solve()
{
    int n; cin>>n;
    if (func(n)) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
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