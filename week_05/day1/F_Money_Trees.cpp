#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> fruit(n);
    vector<int> height(n);

    for (int i = 0; i < n; i++)
        cin >> fruit[i];
    for (int i = 0; i < n; i++)
        cin >> height[i];
    
    int l = 0, sum = 0, mxln = 0;

    for(int r=0; r<n;)
    {
        if (l == r) {
            sum += fruit[r];
        } else {
            if (height[r-1] % height[r] == 0) {
                sum += fruit[r];
            } else {
                sum = fruit[r];
                l = r;
            }
        }
        while(sum > k)
        {
            sum -= fruit[l];
            l++;
        }
        mxln = max(mxln, r-l+1);
        r++;
    }

    cout<<mxln<<nl;
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}