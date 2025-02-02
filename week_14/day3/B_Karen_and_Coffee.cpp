#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 2e5+5;
vector<int> pre(mxN,0), cnt(mxN,0);
int main()
{
    fastIO();
    int n, k, q;
    cin>>n>>k>>q;

    while(n--)
    {
        int l, r;
        cin>>l>>r;
        pre[l]++;
        pre[r+1]--;
    }
    for(int i=1; i<2e5+2; i++) {
        pre[i] = pre[i] + pre[i-1];
    }
    int sum = 0;
    for(int i=0; i<2e5+2; i++) {
        if (pre[i] >= k) {
            sum++;
        }
        cnt[i] = sum;
    }

    while(q--)
    {
        int l, r;
        cin>>l>>r;
        cout<<cnt[r] - cnt[l-1]<<nl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/816/B