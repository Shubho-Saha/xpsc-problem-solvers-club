#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];

    int l=0, r=0;
    int sum = 0, ans = 0;
    while(r < n)
    {
        sum += vec[r];

        if ((r-l)+1 == k) {
            ans = max(ans, sum);
            sum -= vec[l];
            l++; r++;
        } else {
            r++;
        }
    }
    cout<<ans<<nl;

    return 0;
}