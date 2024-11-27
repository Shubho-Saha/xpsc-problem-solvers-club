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

    vector<int> vec(n);
    int zero = 0, pos1 = -1, pos2 = -1;
    for(int i=0; i<n; i++) {
        cin>>vec[i];
        if (vec[i] == 0) zero++;
        if (vec[i] > 0 && pos1 == -1) {
            pos1 = vec[i];
        } else if (vec[i] > 0 && vec[i] != pos1) {
            pos2 = vec[i];
        }
    }

    int nonZero = n - zero;
    if (zero <= nonZero+1) {
        cout<<0<<nl;
        return;
    }

    if (pos2 != -1) {
        cout<<1<<nl;
    } else {
        if (pos1 == 1) {
            cout<<2<<nl;
        } else {
            cout<<1<<nl;
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