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
        vector<int> alice(n), bob(n);
        for(int i=0; i<n; i++) {
            cin>>alice[i];
        }
        for(int i=0; i<n; i++) {
            cin>>bob[i];
        }

        int count = 0;
        for(int i=0; i<n; i++) {
            if (bob[i] <= (alice[i]*2)) {
                if (alice[i] <= (bob[i]*2)) {
                    count++;
                }
            }
        }
        cout<<count<<nl;
    }

    return 0;
}