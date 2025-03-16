#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void print(int x, int n) 
{
    for(int i=1; i<=n; i++) {
        cout<<x++<<" ";
    }
    cout<<nl;
}
void solve()
{
    int n;
    cin>>n;

    if (n % 4 == 0) {
        print(2, n);
    } else if (n % 4 == 1) {
        cout<<0<<" ";
        print(2, n-1);
    } else if (n % 4 == 2) {
        cout<<"1 2 3 4 12 8 ";
        print(14, n-6);
    } else {
        cout<<"1 2 3 ";
        print(4, n-3);
    }
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}