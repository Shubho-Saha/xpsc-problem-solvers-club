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

        if (m > n) {
            cout<<"No"<<nl;
        } else {
            if ((n-m) % 2 == 0) {
                cout<<"Yes"<<nl;
            } else {
                cout<<"No"<<nl;
            }
        }
    }

    return 0;
}