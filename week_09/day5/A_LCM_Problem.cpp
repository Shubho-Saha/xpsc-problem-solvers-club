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
        int l, r;
        cin>>l>>r;

        if (l*2 > r) {
            cout<<-1<<" "<<-1<<nl;
        } else {
            cout<<l<<" "<<2*l<<nl;
        }
    }

    return 0;
}