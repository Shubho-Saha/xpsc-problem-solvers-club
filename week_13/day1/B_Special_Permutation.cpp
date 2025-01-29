#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int m = (n/2)-1;
    vector<int> res(n);
    bool flag = true;
    int l, r;
    if (a < b) {
        l = n-a-1; 
        r = b - 2;
        if (l < m || r < m) flag = false;
    } else {
        l = n-a;
        r = b - 1;
        if (l < m || r < m) flag = false;
    }

    if (flag == false) {
        cout<<-1<<nl;
    } else {
        res[0] = a; res[n-1] = b;
        int val = n;
        for(int i=1; i<n-1; i++) {
            while(val==a || val == b) {
                val--;
            }
            res[i] = val;
            val--;
        }

        for(auto x : res) {
            cout<<x<<" ";
        }
        cout<<nl;
    }
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

// https://codeforces.com/contest/1612/problem/B