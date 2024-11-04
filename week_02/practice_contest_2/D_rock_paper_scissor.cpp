#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int win=0, loss = 0;

    string a, b;
    cin>>a>>b;

    for(int i=0; i<n; i++) 
    {
        if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'P' && b[i] == 'R') || (a[i] == 'S' && b[i] == 'P')) {
            win++;
        } else if ((a[i] == 'R' && b[i]== 'P') || (a[i] == 'P' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'R')) {
            loss++;
        }
    }

    if (win > loss) {
        cout<<0<<nl;
    } else {
        int x = loss - win;
        int ans = (x/2) + 1;
        cout<<ans<<nl;
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