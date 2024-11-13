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
        int idx = 0;
        int cnt = 0;
        while(idx < n)
        {
            if (s[idx] == 'B') {
                cnt++;
                idx += k;
            } else {
                idx++;
            }
        }
        cout<<cnt<<nl;
    }

    return 0;
}