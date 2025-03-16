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
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        int bcnt = count(all(s), 'B');
        if (bcnt == k) {
            cout<<0<<nl;
        } else if (bcnt < k) {
            int acnt = 0, need = k - bcnt;
            for(int i=0; i<n; i++) {
                if (s[i] == 'A') {
                    acnt++;
                }
                if (acnt == need) {
                    cout<<1<<nl;
                    cout<<i+1<<" "<<"B"<<nl;
                    break;
                }
            }
        } else {
            int cnt = 0, need = bcnt - k;
            for(int i=0; i<n; i++) {
                if (s[i] == 'B') cnt++;
                if (cnt == need) {
                    cout<<1<<nl;
                    cout<<i+1<<" "<<"A"<<nl;
                    break;
                }
            }
        }
    }

    return 0;
}