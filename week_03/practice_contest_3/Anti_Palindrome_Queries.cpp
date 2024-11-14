#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, q;
    cin>>n>>q;
    vector<int> one_pfx(n+2), two_pfx(n+2), three_pfx(n+2);

    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if (x == 1) {
            one_pfx[i] = one_pfx[i-1] + 1;
            two_pfx[i] = two_pfx[i-1];
            three_pfx[i] = three_pfx[i-1];
        } else if (x == 2) {
            two_pfx[i] = two_pfx[i-1]+1;
            one_pfx[i] = one_pfx[i-1];
            three_pfx[i] = three_pfx[i-1];
        } else {
            three_pfx[i] = three_pfx[i-1]+1;
            one_pfx[i] = one_pfx[i-1];
            two_pfx[i] = two_pfx[i-1];
        }
    }

    while(q--)
    {
        int left, right;
        cin>>left>>right;
        int length = right - left + 1;
        if (length % 2 != 0) {
            cout<<"No"<<nl;
        } else {
            int one_cnt = one_pfx[right] - one_pfx[left-1];
            int two_cnt = two_pfx[right] - two_pfx[left-1];
            int three_cnt = three_pfx[right] - three_pfx[left-1];
            int mxCnt = max({one_cnt, two_cnt, three_cnt});
            if (mxCnt == (length/2)) {
                cout<<"Yes"<<nl;
            } else {
                cout<<"No"<<nl;
            }
        }
    }

   
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