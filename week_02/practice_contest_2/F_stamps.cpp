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
    string s;
    cin>>s;
    bool flag = false;
    int idx = 0;

    int oneCount = 0;
    for(int i=0; i<n-2; i++) {
        if (s[i] == '1') {
            oneCount++;
            flag = true;
            idx = i;
            break;
        }
    }

    if (flag) {
        for(int i=0; i<n; i++) {
            if (i == idx) {
                cout<<"1";
            } else if (i > idx) {
                cout<<"0";
            } else {
                cout<<s[i];
            }
        }
        cout<<nl;
    } else {
        cout<<s<<nl;
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