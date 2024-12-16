#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#include <numeric>
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
    fastIO();
    int n;
    cin>>n;

    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i];
    }

    int res = vec[0];
    for(int i=1; i<n; i++) {
        res = __gcd(res, vec[i]);
    }

    cout<<res<<nl;
    int a = 24, b = 28;
    int ans = lcm(a,b);
    cout<<ans<<nl;

    return 0;
}