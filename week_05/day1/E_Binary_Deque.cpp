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
    int sum = 0;

    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        sum += x;
        vec.push_back(x);
    }

    if (sum == k) {
        cout<<0<<nl;
        return;
    } else if (k > sum) {
        cout<<-1<<nl;
        return;
    }

    

    int target =0, l=0;
    int mxln = 0;
    for(int r=0; r<n; r++)
    {
        target += vec[r];

        while (target > k )
        {
            target -= vec[l];
            l++;
        }
        mxln = max(mxln, r-l+1);
    }

    cout<<n-mxln<<nl;
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