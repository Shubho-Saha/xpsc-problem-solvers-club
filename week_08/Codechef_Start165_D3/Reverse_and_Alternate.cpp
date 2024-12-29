#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
   
    int one = 0, zero =0;
    for(auto c : s) {
        if (c == '0') {
            zero++;
        } else {
            one++;
        }
    }

    if (abs(one - zero) > 1) {
        cout<<"No"<<nl;
        return;
    }
    if (n <= 2) {
        cout<<"Yes"<<nl;
        return;
    }

    int dzero = 0, done = 0;
    for(int i=0; i<n-1; i++) {
        if (s[i] == '0' && s[i+1] == '0') {
            dzero++;
        }
        if (s[i] == '1' && s[i+1] == '1') {
            done++;
        }
    }

    if (done > 1 || dzero > 1) {
        cout<<"No"<<nl;
    } else {
        cout<<"Yes"<<nl;
    }

    

}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}