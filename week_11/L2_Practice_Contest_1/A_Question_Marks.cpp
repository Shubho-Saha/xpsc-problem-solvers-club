#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        int n; 
        cin>>n;
        string s; 
        cin>>s;
        int a=0, b=0, c=0, d=0;
        for(auto x : s) {
            if (x=='A') {
                a++;
            } else if (x=='B') {
                b++;
            } else if (x=='C') {
                c++;
            } else if (x=='D') {
                d++;
            }
        }

        int ans = min(n, a) + min(n, b) + min(n,c) + min(n,d);
        cout<<ans<<nl;
    }

    return 0;
}