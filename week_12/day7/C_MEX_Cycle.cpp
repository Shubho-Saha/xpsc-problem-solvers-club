#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, x, y;
    cin>>n>>x>>y;
    vector<int> v(n);

    if ((abs(y-x) == 1) || abs(y-x) == n-1) {
        int flag = 0;
        for(int i=0; i<n; i++) {
            v[i] = flag;
            flag = 1 - flag;
        }
        if (n&1) v[n-1] = 2;
    } else {
        if (n&1) {
            x--; y--;
            int flag = 0;
            for(int i=x; i<=y; i++) {
                v[i] = flag;
                flag = 1 - flag;
            }
            flag = 0;
            for(int i=x; i != y; i = (i-1+n)%n) {
                v[i] = flag;
                flag = 1 - flag;
            }
            v[y] = 2;

        } else {
            x--; y--;
            int flag = 0;
            for(int i=0; i<n; i++) {
                v[i] = flag;
                flag = 1 - flag;
            }
            if ((y-x) % 2 == 0) v[y] = 2;
        }
    }

    for(auto x : v) {
        cout<<x<<" ";
    }
    cout<<nl;
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

// https://codeforces.com/contest/2049/problem/C
// Things Learned from this problem
// 1. How to traverse in circular fashion in an array 
// 2. For even length array. If we consider all it's elements are 
// placed in a circular way. Then their MEX cycle would look like  
// 0 1 0 1 or 1 0 1 0 1 0
// 3. For odd length array. One of the elements must be 2 and the rest of the elements will altering between 0 and 1. like 0 1 0 1 2 
// One observation is. If both of my neighboring elements are 1 and my mex will be 0 and if both of them are 0 then my mex would be 1.