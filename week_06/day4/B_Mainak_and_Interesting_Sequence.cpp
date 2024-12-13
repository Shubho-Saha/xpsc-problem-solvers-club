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
        int n, m;
        cin>>n>>m;

        if (m < n) {
            cout<<"No"<<nl;
            continue;
        }

        if (n&1) {
            cout<<"Yes"<<nl;
            cout<<m-n+1<<" ";
            for(int i=1; i<n; i++) {
                cout<<1<<" ";
            }
            cout<<nl;
        } else {
            if (m % 2 != 0) {
                cout<<"No"<<nl;
            } else {
                cout<<"Yes"<<nl;
                int bigVal = (m-(n-2))/2;
                cout<<bigVal<<" "<<bigVal<<" ";
                for(int i=0; i<n-2; i++) {
                    cout<<1<<" ";
                }
                cout<<nl;
            }
        }
    }

    return 0;
}