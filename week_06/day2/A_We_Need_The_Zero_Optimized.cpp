#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int xorSum = 0;
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            xorSum ^= x;
        }

        if (n % 2 == 0) {
            if (xorSum == 0) {
                cout<<1<<nl;
            } else {
                cout<<-1<<nl;
            }
        } else {
            cout<<xorSum<<nl;
        }
    }

    return 0;
}